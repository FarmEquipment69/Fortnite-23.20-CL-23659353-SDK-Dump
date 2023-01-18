// Class /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface
// Size: 0x28
class IFortAIEnvironmentalDangerSourceInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceBounds (Underlying native function: GetDangerSourceBounds 0xa224f8c)
	struct FBox GetDangerSourceBounds(); // (Native | Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceActive (Underlying native function: GetDangerSourceActive 0x8093c98)
	bool GetDangerSourceActive(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerAtLocation (Underlying native function: GetDangerAtLocation 0xa224ef4)
	float GetDangerAtLocation(struct FVector& Location); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)
};

