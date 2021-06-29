#ifndef PG_MAPPING_H
#define PG_MAPPING_H
#define MappingRelationId 4392
CATALOG(pg_mapping,4392,MappingRelationId) BKI_WITHOUT_OIDS
{
Oid classoid;
Oid tupleoid;
int8 item;
}FormData_pg_mapping;

typedef FormData_pg_mapping *Form_pg_mapping;
