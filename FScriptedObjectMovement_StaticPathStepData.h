// ScriptStruct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathStepData
// Size: 0xf0
struct FScriptedObjectMovement_StaticPathStepData
{
	struct FTransform StartWorldTransform; // 0x0 (0x60)
	struct FTransform EndWorldTransform; // 0x60 (0x60)
	int MasterPathStartSplinePoint; // 0xc0 (0x4)
	int SubSplineStartPoint; // 0xc4 (0x4)
	float MoveAtServerTimeSecs; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler; // 0xd0 (0x8)
	unsigned char unreflected_d8[0x8]; // 0xd8 (0x8) 
	struct FGameplayTag MoveStyleTag; // 0xe0 (0x4)
	bool bTeleport; // 0xe4 (0x1)
	bool bIsSkipStep; // 0xe5 (0x1)
	unsigned char padding_e6[0xa]; // 0xe6 (0xa)
};

