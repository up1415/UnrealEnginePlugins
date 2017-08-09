#pragma once

#include "AnimNodeTutorial.h"
#include "AnimationRuntime.h"

void FAnimNodeTutorial::Initialize(const FAnimationInitializeContext& Context)
{
	FAnimNode_Base::Initialize(Context);

	AnimSequence.Initialize(Context);
}


void FAnimNodeTutorial::CacheBones(const FAnimationCacheBonesContext& Context)
{
	AnimSequence.CacheBones(Context);
}

void FAnimNodeTutorial::Update(const FAnimationUpdateContext& Context)
{
	AnimSequence.Update(Context);
}

void FAnimNodeTutorial::Evaluate(FPoseContext& Output)
{
	AnimSequence.Evaluate(Output);
}

void FAnimNodeTutorial::GatherDebugData(FNodeDebugData& DebugData)
{
// 	FString DebugLine = DebugData.GetNodeName(this);
// 	DebugData.AddDebugItem(DebugLine);
// 
// 	AnimSequence.GatherDebugData()
}