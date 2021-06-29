#ifndef PG_DEPUTYTYPE_H
#define PG_DEPUTYTYPE_H
#define DeputytypeRelationId 4390
CATALOG(pg_deputytype,4390,DeputytypeRelationId) BKI_WITHOUT_OIDS
{
NameData deputyclassname;
char deputytype;
text deputy_query;
}FormData_pg_deputytype;

typedef FormData_pg_deputytype *Form_pg_deputytype;
