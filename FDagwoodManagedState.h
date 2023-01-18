// ScriptStruct /Script/ValetRuntime.DagwoodManagedState
// Size: 0x458
struct FDagwoodManagedState
{
	int Frame; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FFortDagwoodCmd InputCmd; // 0x8 (0x30)
	struct FDagwoodInPersistent GTState; // 0x38 (0x248)
	struct FDagwoodState_PT PTState; // 0x280 (0x1b8)
	class APlayerController* PC; // 0x438 (0x8)
	unsigned char unreflected_440[0x8]; // 0x440 (0x8) 
	struct TArray<struct FDagwoodFutureClientInput> FutureInputs; // 0x448 (0x10)
};

