// Copyright (c) 2024 averne
//
// This file is part of Fizeau.
//
// Fizeau is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Fizeau is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Fizeau.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <deko3d.hpp>
#include <imgui.h>
#include <common.hpp>

namespace fz::gui {

namespace im = ImGui;

void init();
void exit();

void draw_background(Config &ctx, DkResHandle background_handle);
Result draw_main_window(Config &ctx);
void draw_preview_window(Config &ctx, DkResHandle preview_ref_handle, DkResHandle preview_mat_handle);
void draw_graph_window(Config &ctx);
void draw_error_window(Config &ctx, Result error);

} // namespace fz::gui
