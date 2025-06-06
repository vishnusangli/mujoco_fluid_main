// Copyright 2021 DeepMind Technologies Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MUJOCO_SRC_ENGINE_ENGINE_SOLVER_H_
#define MUJOCO_SRC_ENGINE_ENGINE_SOLVER_H_

#include <mujoco/mjdata.h>
#include <mujoco/mjmodel.h>

//------------------------------ monolithic solvers ------------------------------------------------

// PGS solver
void mj_solPGS(const mjModel* m, mjData* d, int maxiter);

// No Slip solver (modified PGS)
void mj_solNoSlip(const mjModel* m, mjData* d, int maxiter);

// CG solver
void mj_solCG(const mjModel* m, mjData* d, int maxiter);

// Newton solver
void mj_solNewton(const mjModel* m, mjData* d, int maxiter);


//------------------------------ per-island solvers ------------------------------------------------

// CG solver
void mj_solCG_island(const mjModel* m, mjData* d, int island, int maxiter);

// Newton entry point
void mj_solNewton_island(const mjModel* m, mjData* d, int island, int maxiter);

#endif  // MUJOCO_SRC_ENGINE_ENGINE_SOLVER_H_
