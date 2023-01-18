// Class /Script/FortniteGame.FortLobbyBeaconPlayerState
// Size: 0x5b0
class AFortLobbyBeaconPlayerState : public ALobbyBeaconPlayerState
{
	struct FUniqueNetIdRepl ConsoleUniqueNetId; // 0x358 (0x30)
	struct FString Platform; // 0x388 (0x10)
	unsigned char TeamAffiliation; // 0x398 (0x1)
	unsigned char unreflected_399[0x3]; // 0x399 (0x3) 
	int CurrentCharXP; // 0x39c (0x4)
	int MatchmakingLevel; // 0x3a0 (0x4)
	unsigned char unreflected_3a4[0x4]; // 0x3a4 (0x4) 
	struct FString HeroId; // 0x3a8 (0x10)
	class UFortHeroType* HeroType; // 0x3b8 (0x8)
	struct FFortAthenaLoadout CosmeticLoadout; // 0x3c0 (0x178)
	unsigned char unreflected_538[0x8]; // 0x538 (0x8) 
	int LobbyTimeRemaining; // 0x540 (0x4)
	unsigned char unreflected_544[0x4]; // 0x544 (0x4) 
	int64_t HomeBaseVersion; // 0x548 (0x8)
	struct TArray<struct FString> SelectedGadgets; // 0x550 (0x10)
	enum ETrustedPlatformType TrustedPlatformType; // 0x560 (0x1)
	struct TEnumAsByte<EFortCustomGender> CharacterGender; // 0x561 (0x1)
	unsigned char padding_562[0x4e]; // 0x562 (0x4e)

	/* Functions */

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_LobbyTimeRemaining (Underlying native function: OnRep_LobbyTimeRemaining 0x23eff98)
	void OnRepLobbyTimeRemaining(); // (Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_HomeBaseVersion (Underlying native function: OnRep_HomeBaseVersion 0x8be5320)
	void OnRepHomeBaseVersion(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_HeroType (Underlying native function: OnRep_HeroType 0x6e13a3c)
	void OnRepHeroType(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_HeroID (Underlying native function: OnRep_HeroID 0x6e13a3c)
	void OnRepHeroID(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_Gadgets (Underlying native function: OnRep_Gadgets 0x6e13a3c)
	void OnRepGadgets(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_CosmeticLoadout (Underlying native function: OnRep_CosmeticLoadout 0x6e13a3c)
	void OnRepCosmeticLoadout(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_ConsoleUniqueNetId (Underlying native function: OnRep_ConsoleUniqueNetId 0x8be52e0)
	void OnRepConsoleUniqueNetId(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_CharXP (Underlying native function: OnRep_CharXP 0x6e13a3c)
	void OnRepCharXP(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLobbyBeaconPlayerState.OnRep_CharacterGender (Underlying native function: OnRep_CharacterGender 0x6e13a3c)
	void OnRepCharacterGender(); // (Final | Native | Protected)
};

