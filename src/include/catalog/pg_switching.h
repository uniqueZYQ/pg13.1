#ifndef PG_SWITCHING_H
#define PG_SWITCHING_H
#include "catalog/genbki.h"
#include "catalog/pg_switching_d.h"
#define SwitchingRelationId 4391
CATALOG(pg_switching,4391,SwitchingRelationId) BKI_WITHOUT_OIDS
{
Oid classoid;
int16 attnum;
int16 exprnum;
text switching;
}FormData_pg_switching;

typedef FormData_pg_switching *Form_pg_switching;
