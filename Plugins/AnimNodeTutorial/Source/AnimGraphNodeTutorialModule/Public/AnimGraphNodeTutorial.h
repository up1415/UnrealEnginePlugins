#pragma once

#include "AnimNodeTutorial.h"
#include "Editor/AnimGraph/Classes/AnimGraphNode_Base.h"
#include "AnimGraphNodeTutorial.generated.h"

UCLASS(meta = (Keywords = "Rig Logic Animation Node1"))
class ANIMGRAPHNODETUTORIALMODULE_API UAnimGraphNodeTutorial : public UAnimGraphNode_Base {
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNodeTutorial AnimSequence;

public:
	FText GetTooltipText() const;
	FText GetNodeTitle(ENodeTitleType::Type TitleType) const;

protected:
	void ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog);
};
