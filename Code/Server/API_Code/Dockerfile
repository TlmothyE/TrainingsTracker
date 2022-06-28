FROM ubuntu:20.04
ENV BUILD_TYPE=Release

# Setup Build tools
RUN apt-get update -qq && export DEBIAN_FRONTEND=noninteractive && \
    apt-get install -y --no-install-recommends \
    make cmake ninja-build gcc-10 g++-10 \
    zlib1g-dev git ca-certificates libboost-all-dev libssl-dev libpqxx-dev
ENV CC=gcc-10
ENV CXX=g++-10

WORKDIR /api_server
COPY CMakeLists.txt /api_server/
COPY ./libs/buildDependencies.sh /api_server/libs/

WORKDIR /api_server/libs
RUN /api_server/libs/buildDependencies.sh
WORKDIR /api_server
COPY ./source /api_server/source/

# Cmake config
WORKDIR /api_server/build/${BUILD_TYPE}
RUN cmake -G Ninja \
    -D CMAKE_BUILD_TYPE=${BUILD_TYPE} \
    -D BUILD_SHARED_LIBS=OFF \
    -D UNIT_TEST=OFF \
    ../..

# Cmake build
RUN cmake --build . --config ${BUILD_TYPE}

CMD ["./API_Code"]
