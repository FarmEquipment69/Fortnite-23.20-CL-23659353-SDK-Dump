// Class /Script/FortniteGame.AthenaSpectatorPlayerListRowData
// Size: 0xb0
class UAthenaSpectatorPlayerListRowData : public UObject
{
	struct FMulticastInlineDelegate OnIsSpectatorTargetChanged; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnKillsChanged; // 0x38 (0x10)
	int Rank; // 0x48 (0x4)
	int TeamNumber; // 0x4c (0x4)
	struct FLinearColor TeamColor; // 0x50 (0x10)
	struct FString PlayerName; // 0x60 (0x10)
	int Kills; // 0x70 (0x4)
	bool IsRecordingPlayer; // 0x74 (0x1)
	bool IsSpectatorTarget; // 0x75 (0x1)
	unsigned char unreflected_76[0x2]; // 0x76 (0x2) 
	class AFortPlayerStateAthena* PlayerState; // 0x78 (0x8)
	struct FUniqueNetIdRepl PlayerUniqueId; // 0x80 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.AthenaSpectatorPlayerListRowData.SetKills (Underlying native function: SetKills 0x8e492cc)
	void SetKills(class AFortPlayerStateAthena*& PS, int& InKills); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.AthenaSpectatorPlayerListRowData.GetPlayerState (Underlying native function: GetPlayerState 0x8011410)
	class AFortPlayerStateAthena* GetPlayerState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

