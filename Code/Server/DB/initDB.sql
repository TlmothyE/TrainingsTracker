create table users
(
    "userID"      serial
        constraint users_pk
            primary key,
    name          text not null,
    password      text not null,
    age           text,
    weight        text,
    "calfCir"     text,
    "hipCir"      text,
    "tightCir"    text,
    "chestCir"    text,
    "upperArmCir" text,
    bmi           text
);

alter table users
    owner to postgres;

create unique index users_userid_uindex
    on users ("userID");

create table workoutroutines
(
    "workoutroutineID" serial
        constraint workoutroutines_pk
            primary key,
    "Date"             text,
    "userID"           integer not null
        constraint workoutroutines_users_userid_fk
            references users
);

alter table workoutroutines
    owner to postgres;

create unique index workoutroutines_workoutroutineid_uindex
    on workoutroutines ("workoutroutineID");

create table exercises
(
    "exerciseID"   serial
        constraint exercises_pk
            primary key,
    "userID"       integer not null
        constraint exercises_users_userid_fk
            references users,
    "exerciseType" integer not null,
    name           text
);

alter table exercises
    owner to postgres;

create unique index exercises_exerciseid_uindex
    on exercises ("exerciseID");

create table exercise_workoutroutines
(
    "workoutroutineID" integer not null
        constraint exercise_workoutroutines_workoutroutines_workoutroutineid_fk
            references workoutroutines
            on update cascade on delete cascade,
    "exerciseID"       integer not null
        constraint exercise_workoutroutines_exercises_exerciseid_fk
            references exercises
            on update cascade on delete cascade,
    "targetReps"       integer,
    "targetSets"       integer,
    "targetWeight"     integer,
    "targetTime"       text
);

alter table exercise_workoutroutines
    owner to postgres;


