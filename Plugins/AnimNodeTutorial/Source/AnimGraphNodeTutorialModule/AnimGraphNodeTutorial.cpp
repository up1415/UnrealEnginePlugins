//#include "AnimGraphNode_RigLogic_EditorModule_PCH.h"
//#include "CompilerResultsLog.h"
#include "AnimGraphNodeTutorial.h"
#include "Editor/AnimGraph/Classes/AnimGraphNode_Base.h"

//#define LOCTEXT_NAMESPACE "AnimGraphNode_RigLogic_EditorModule"
#define LOCTEXT_NAMESPACE "AnimGraphNodeTutorialModule"

UAnimGraphNodeTutorial::UAnimGraphNodeTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAnimGraphNodeTutorial::ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog) {
	Super::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);
}

FText UAnimGraphNodeTutorial::GetTooltipText() const {
	return LOCTEXT("AnimGraphNodeTutorial_Tooltip", "Anim Graph Node Tutorial");
}

FText UAnimGraphNodeTutorial::GetNodeTitle(ENodeTitleType::Type TitleType) const {
	return LOCTEXT("AnimGraphNodeTutorial_Title", "Anim Graph Node Tutorial");
}

#undef LOCTEXT_NAMESPACE