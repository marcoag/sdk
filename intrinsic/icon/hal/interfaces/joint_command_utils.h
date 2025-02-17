// Copyright 2023 Intrinsic Innovation LLC

#ifndef INTRINSIC_ICON_HAL_INTERFACES_JOINT_COMMAND_UTILS_H_
#define INTRINSIC_ICON_HAL_INTERFACES_JOINT_COMMAND_UTILS_H_

#include "flatbuffers/flatbuffers.h"
#include "intrinsic/icon/hal/interfaces/joint_command.fbs.h"

namespace intrinsic_fbs {

flatbuffers::DetachedBuffer BuildJointPositionCommand(uint32_t num_dof);

flatbuffers::DetachedBuffer BuildJointVelocityCommand(uint32_t num_dof);

flatbuffers::DetachedBuffer BuildJointTorqueCommand(uint32_t num_dof);

flatbuffers::DetachedBuffer BuildHandGuidingCommand();

}  // namespace intrinsic_fbs

#endif  // INTRINSIC_ICON_HAL_INTERFACES_JOINT_COMMAND_UTILS_H_
