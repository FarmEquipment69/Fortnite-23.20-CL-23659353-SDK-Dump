// Class /Script/SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
// Size: 0x450
class AFortScriptedObjectMovement_WorldPhaseSite : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<struct FFortScriptedObjectMovementPhaseData> Phases; // 0x290 (0x10)
	struct FScalableFloat NumSimulatenousMovingObjects; // 0x2a0 (0x28)
	struct FScalableFloat PhaseIntervalSeconds; // 0x2c8 (0x28)
	unsigned char unreflected_2f0[0x20]; // 0x2f0 (0x20) 
	struct FScriptedObjectMovement_Grid BaseGrid; // 0x310 (0xc8)
	struct FScriptedObjectMovement_DynamicPathContext InProgressPath; // 0x3d8 (0x38)
	struct TArray<class UFortScriptedObjectMovement_Slot*> LeavingSlotStack; // 0x410 (0x10)
	struct TArray<class UFortScriptedObjectMovement_Slot*> DestinationSlotStack; // 0x420 (0x10)
	struct TArray<class UFortScriptedObjectMovement_Slot*> OverflowSlotStack; // 0x430 (0x10)
	struct TArray<class AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects; // 0x440 (0x10)
};

