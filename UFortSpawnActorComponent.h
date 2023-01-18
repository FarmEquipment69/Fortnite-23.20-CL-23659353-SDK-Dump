// Class /Script/FortniteGame.FortSpawnActorComponent
// Size: 0xb8
class UFortSpawnActorComponent : public UGameFrameworkComponent
{
	class UClass* ActorToSpawnClass; // 0xa0 (0x8)
	unsigned char bAttachSpawnedActorToOwner; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	struct FName SocketName; // 0xac (0x4)
	struct FName ComponentTag; // 0xb0 (0x4)
	unsigned char padding_b4[0x4]; // 0xb4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortSpawnActorComponent.OnPlaylistDataLoaded (Underlying native function: OnPlaylistDataLoaded 0x871b0a8)
	void OnPlaylistDataLoaded(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)
};

