// Copyright 2008 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "VideoCommon/Statistics.h"

#include <utility>

#include "VideoCommon/VideoCommon.h"
#include "VideoCommon/VideoConfig.h"

Statistics g_stats;

void Statistics::ResetFrame()
{
  this_frame = {};
}

void Statistics::SwapDL()
{
  std::swap(this_frame.num_dl_prims, this_frame.num_prims);
  std::swap(this_frame.num_xf_loads_in_dl, this_frame.num_xf_loads);
  std::swap(this_frame.num_cp_loads_in_dl, this_frame.num_cp_loads);
  std::swap(this_frame.num_bp_loads_in_dl, this_frame.num_bp_loads);
}

void Statistics::Display() const
{
}

// Is this really needed?
void Statistics::DisplayProj() const
{
}
