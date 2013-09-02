# -*- coding: utf-8 -*-
import xlrd
import hashlib
import redis
import sys
reload(sys)
sys.setdefaultencoding('utf-8')
fname = "test.xls"

bk = xlrd.open_workbook(fname)
shxrange = range(bk.nsheets)
try:
    sh = bk.sheet_by_name("sheet2")
except:
    print "no sheet in %s named sheet1" % fname
#    return None
nrows = sh.nrows
ncols = sh.ncols
print "nrows %d, ncols %d" % (nrows,ncols)

r = redis.StrictRedis(host='localhost', port=6379, db=6)

#cell_value = sh.cell_value(1,1)
#print cell_value
#row_list = []
for i in range(1,nrows):
#    row_data = sh.row_values(i)
#    row_list.append(row_data)
    row_data = sh.cell_value(i,0).strip()
    row_area = sh.cell_value(i,4).strip()
    row_areas = hashlib.md5(row_area.decode('utf-8')).hexdigest().upper()[:4]
    print "CELL = %s, AREA = %s" %(row_data, row_areas)
    r.set(row_data, row_areas)


