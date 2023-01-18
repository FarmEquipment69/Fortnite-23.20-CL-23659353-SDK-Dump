// Class /Script/FortniteGame.FortPawnSpinParamsObj
// Size: 0x38
class UFortPawnSpinParamsObj : public UObject
{
	unsigned char bReplicatedFlag; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FFortPawnSpinParams* SpinParams; // 0x2c (0x8)
	unsigned char padding_34[0x4]; // 0x34 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnSpinParamsObj.BP_CreateFortPawnSpinParamsObjInstance (Underlying native function: BP_CreateFortPawnSpinParamsObjInstance 0x811f170)
	static class UFortPawnSpinParamsObj* BPCreateFortPawnSpinParamsObjInstance(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

