// Class /Script/FortniteGame.FortGameStateComponent_AffiliationManager
// Size: 0x238
class UFortGameStateComponent_AffiliationManager : public UFortGameStateComponent
{
	struct FFactionData GameParticipantFaction; // 0xa0 (0x110)
	struct TArray<struct FFactionData> CachedFactionData; // 0x1b0 (0x10)
	struct FGameplayTagContainer CachedFactionTags; // 0x1c0 (0x20)
	struct FGameplayTagContainer BlockResetSpecificRelationTags; // 0x1e0 (0x20)
	struct TArray<class UFortActorComponent_Affiliation*> AffiliationComponents; // 0x200 (0x10)
	struct TArray<struct FFortFactionInfo> FactionInfos; // 0x210 (0x10)
	struct TArray<class UFortActorComponent_Affiliation*> AffiliationComponentsToRegister; // 0x220 (0x10)
	unsigned char padding_230[0x8]; // 0x230 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_AffiliationManager.OnRep_FactionInfos (Underlying native function: OnRep_FactionInfos 0x2fd4d40)
	void OnRepFactionInfos(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_AffiliationManager.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x82b397c)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)
};

