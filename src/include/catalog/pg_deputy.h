#ifndef PG_DEPUTY_H
#define PG_DEPUTY_H
#define DeputyRelationId 4389
CATALOG(pg_deputy,4389,DeputyRelationId) BKI_WITHOUT_OIDS
{
Oid sourceclassid;
Oid deputyclassid;
int4 deputyseqno;
}FormData_pg_deputy;

typedef FormData_pg_deputy *Form_pg_deputy;