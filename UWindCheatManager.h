// Class /Script/WindRuntime.WindCheatManager
// Size: 0x40
class UWindCheatManager : public UChildCheatManager
{
	class UClass* InflateEffectClass; // 0x28 (0x8)
	class UClass* DeflateEffectClass; // 0x30 (0x8)
	int MinBalloonsOnPlayer; // 0x38 (0x4)
	int MaxBalloonsOnPlayer; // 0x3c (0x4)

	/* Functions */

	// Function /Script/WindRuntime.WindCheatManager.ReleaseBalloonOnSelf (Underlying native function: ReleaseBalloonOnSelf 0x7239740)
	void ReleaseBalloonOnSelf(int& NumBalloons); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | Const)

	// Function /Script/WindRuntime.WindCheatManager.InflateBalloonOnSelf (Underlying native function: InflateBalloonOnSelf 0x7239740)
	void InflateBalloonOnSelf(int& NumBalloons); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | Const)
};

