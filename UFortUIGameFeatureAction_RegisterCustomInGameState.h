// Class /Script/FortniteUI.FortUIGameFeatureAction_RegisterCustomInGameState
// Size: 0x80
class UFortUIGameFeatureAction_RegisterCustomInGameState : public UFortUIGameFeatureAction
{
	struct TWeakObjectPtr<class UFortPlaylist> Playlist; // 0x28 (0x28)
	class UFortPlaylist* CachedPlaylist; // 0x50 (0x8)
	struct TWeakObjectPtr<class UClass> CustomInGameStateWidget; // 0x58 (0x28)
};

