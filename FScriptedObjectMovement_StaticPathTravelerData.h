// ScriptStruct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
// Size: 0xc0
struct FScriptedObjectMovement_StaticPathTravelerData
{
	struct TArray<class USplineComponent*> GeneratedSplinesArray; // 0x0 (0x10)
	struct TArray<struct FScriptedObjectMovement_StepMetaData> StepMetaData; // 0x10 (0x10)
	class USplineComponent* EnterSpline; // 0x20 (0x8)
	class USplineComponent* ExitSpline; // 0x28 (0x8)
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler; // 0x30 (0x8)
	int TravelOrder; // 0x38 (0x4)
	float LateralOffset; // 0x3c (0x4)
	bool bLocked; // 0x40 (0x1)
	bool bLockEnterSpline; // 0x41 (0x1)
	bool bLockExitSpline; // 0x42 (0x1)
	unsigned char unreflected_43[0x5]; // 0x43 (0x5) 
	struct FVector TravelerBounds; // 0x48 (0x18)
	unsigned char padding_60[0x60]; // 0x60 (0x60)
};

