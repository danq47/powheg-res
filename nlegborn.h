c -*- Fortran -*-
      
      integer nlegborn,nlegreal
      parameter (nlegborn=           4 )
      parameter (nlegreal=nlegborn+1)
      integer ndiminteg
      parameter (ndiminteg=(nlegreal-2)*3-4+2-1+1)
      integer maxprocborn,maxprocreal
      parameter (maxprocborn=31,maxprocreal=176)
 

      integer maxalr
      parameter (maxalr=maxprocreal*nlegreal*(nlegreal-1)/2)

c DQ - mod start 25/10/12
c Added in maxreshists from RES/b_bbar_4l
      integer maxreshists
      parameter (maxreshists=500)
c DQ - mod end
