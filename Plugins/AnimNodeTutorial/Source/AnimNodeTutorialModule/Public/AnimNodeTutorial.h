#pragma once

#include <string>
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/SmartName.h"

#include "AnimNodeTutorial.generated.h"

USTRUCT()
struct ANIMNODETUTORIALMODULE_API FAnimNodeTutorial : public FAnimNode_Base {
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(Category = Links, EditAnywhere, Meta = (PinShownByDefault))
    FPoseLink AnimSequence;

public:
	// FAnimNode_Base interface
	virtual void Initialize(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones(const FAnimationCacheBonesContext& Context) override;
	virtual void Update(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate(FPoseContext& Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
};
