/***** Preamble block *********************************************************
* 
* This file is part of h5py, a low-level Python interface to the HDF5 library.
* 
* Copyright (C) 2008 Andrew Collette
* http://h5py.alfven.org
* License: BSD  (See LICENSE.txt for full license)
* 
* $Date$
* 
****** End preamble block ****************************************************/


#ifndef H5PY_LZF_H
#define H5PY_LZF_H

#define H5PY_FILTER_LZF 32000   /* Semi-official as of 2/5/09.  This value can
                                   never change. */

/* Register the filter with the library. Returns a negative value on failure, 
   and a non-negative value on success.
*/
int register_lzf(void);

#endif
