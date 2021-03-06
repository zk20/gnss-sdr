/*!
 * \file unpack_intspir_1bit_samples.h
 *
 * \brief Unpacks SPIR int samples to NSR 1 bit samples
 * \author Fran Fabra fabra (at) ice.csic.es
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is not part of GNSS-SDR.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -------------------------------------------------------------------------
 */

#ifndef GNSS_SDR_UNPACK_INTSPIR_1BIT_SAMPLES_H
#define GNSS_SDR_UNPACK_INTSPIR_1BIT_SAMPLES_H

#include <gnuradio/sync_interpolator.h>

class unpack_intspir_1bit_samples;

using unpack_intspir_1bit_samples_sptr = boost::shared_ptr<unpack_intspir_1bit_samples>;

unpack_intspir_1bit_samples_sptr make_unpack_intspir_1bit_samples();

/*!
 * \brief This class implements conversion between byte packet samples to 2bit samples
 *  1 byte = 4 2bit samples
 */
class unpack_intspir_1bit_samples : public gr::sync_interpolator
{
public:
    unpack_intspir_1bit_samples();
    ~unpack_intspir_1bit_samples() = default;
    int work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items);

private:
    friend unpack_intspir_1bit_samples_sptr make_unpack_intspir_1bit_samples_sptr();
};

#endif  // GNSS_SDR_UNPACK_INTSPIR_1BIT_SAMPLES_H
