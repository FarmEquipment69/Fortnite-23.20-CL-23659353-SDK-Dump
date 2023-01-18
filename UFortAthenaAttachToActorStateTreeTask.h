// Class /Script/FortniteAI.FortAthenaAttachToActorStateTreeTask
// Size: 0x80
class UFortAthenaAttachToActorStateTreeTask : public UStateTreeTaskBlueprintBase
{
	class AActor* Actor; // 0x38 (0x8)
	class AActor* TargetActor; // 0x40 (0x8)
	enum EFortAthenaStateTreeTaskFeatureExecutionMode AttachExecutionMode; // 0x48 (0x4)
	bool bHandleAthenaMovComponent; // 0x4c (0x1)
	bool bSetPhysicsToQueryOnlyWhileAttached; // 0x4d (0x1)
	bool bTryToAttachToSkeletalMeshOnTargetActor; // 0x4e (0x1)
	bool bChangeBaseToSkeletalMeshOnTargetActor; // 0x4f (0x1)
	enum EAttachmentRule AttachmentLocationRule; // 0x50 (0x1)
	enum EAttachmentRule AttachmentRotationRule; // 0x51 (0x1)
	enum EAttachmentRule AttachmentScaleRule; // 0x52 (0x1)
	bool bWeldSimulatedBodiesOnAttach; // 0x53 (0x1)
	struct FName AttachmentSocketName; // 0x54 (0x4)
	enum EFortAthenaStateTreeTaskFeatureExecutionMode DetachExecutionMode; // 0x58 (0x4)
	bool bForceChangeBaseOnDetach; // 0x5c (0x1)
	enum EDetachmentRule DetachmentLocationRule; // 0x5d (0x1)
	enum EDetachmentRule DetachmentRotationRule; // 0x5e (0x1)
	enum EDetachmentRule DetachmentScaleRule; // 0x5f (0x1)
	bool bCallModifyOnDetach; // 0x60 (0x1)
	bool bHandleLaunchCharacter; // 0x61 (0x1)
	bool bHasHandledLaunchCharacter; // 0x62 (0x1)
	unsigned char unreflected_63[0x5]; // 0x63 (0x5) 
	class AFortPawn* FortPawnActor; // 0x68 (0x8)
	unsigned char padding_70[0x10]; // 0x70 (0x10)
};

