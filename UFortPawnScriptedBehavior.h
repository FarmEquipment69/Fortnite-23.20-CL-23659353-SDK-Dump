// Class /Script/FortniteGame.FortPawnScriptedBehavior
// Size: 0xf8
class UFortPawnScriptedBehavior : public UObject
{
	struct TArray<struct FScriptedAction> ActionTemplates; // 0x28 (0x10)
	struct TArray<struct FScriptedBehavior> ScriptedBehaviors; // 0x38 (0x10)
	struct FScriptedBehavior CurrentBehavior; // 0x48 (0x20)
	struct FScriptedAction CurrentCommand; // 0x68 (0x70)
	struct FMulticastInlineDelegate ScriptComplete; // 0xd8 (0x10)
	unsigned char padding_e8[0x10]; // 0xe8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnScriptedBehavior.PlaceStructure (Underlying native function: PlaceStructure 0x899d4f8)
	void PlaceStructure(); // (Final | Native | Private)
};

