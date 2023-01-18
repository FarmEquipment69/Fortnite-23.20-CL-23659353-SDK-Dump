// Class /Script/FortniteGame.FortCosmeticCheats
// Size: 0x30
class UFortCosmeticCheats : public UChildCheatManager
{
	unsigned char unreflected_30[0x30]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticCheats.SetEnlightenedLevel (Underlying native function: SetEnlightenedLevel 0x76c12f0)
	void SetEnlightenedLevel(int& Level, int& Season); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortCosmeticCheats.RemoveStaticHooks (Underlying native function: RemoveStaticHooks 0x26daa0c)
	static void RemoveStaticHooks(); // (Final | Native | Static | Private)

	// Function /Script/FortniteGame.FortCosmeticCheats.AdjustEnlightenedLevel (Underlying native function: AdjustEnlightenedLevel 0x76c12f0)
	void AdjustEnlightenedLevel(int& Delta, int& Season); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortCosmeticCheats.AddStaticHooks (Underlying native function: AddStaticHooks 0x26daa0c)
	static void AddStaticHooks(); // (Final | Native | Static | Private)
};

