#ifndef PG_BIPOINTER_H
#define PG_BIPOINTER_H
#define BipointerRelationId 4393
CATALOG(pg_bipointer,4393,BipointerRelationId) BKI_WITHOUT_OIDS
{
Oid sourceclassoid;
Oid sourceobjectoid;
Oid deputyclassid;
Oid deputyobjectid;
}FormData_pg_bipointer;

typedef FormData_pg_bipointer *Form_pg_bipointer;
