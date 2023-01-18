// Class /Script/FortniteUI.FortAthenaMatchmakingTile
// Size: 0x1540
class UFortAthenaMatchmakingTile : public UCommonButtonLegacy
{
	class UEpicCMSImage* GameModeImage; // 0x1430 (0x8)
	class UCommonBorder* AdSpace; // 0x1438 (0x8)
	class UCommonTextBlock* AdText; // 0x1440 (0x8)
	class UCommonTextBlock* SpecialAdText; // 0x1448 (0x8)
	class UCommonTextBlock* GameModeName; // 0x1450 (0x8)
	class UCommonTextBlock* SubGameModeName; // 0x1458 (0x8)
	int BorderDisplayStyle; // 0x1460 (0x4)
	unsigned char unreflected_1464[0x4]; // 0x1464 (0x4) 
	struct FAthenaPlaylistEntry CMSPlaylistEntry; // 0x1468 (0x78)
	class UFortActiveFriendsViolator* ViolatorActiveFriends; // 0x14e0 (0x8)
	struct FPlaylistFrontEndData TilePlaylistData; // 0x14e8 (0x50)
	unsigned char padding_1538[0x8]; // 0x1538 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.UpdateTileAvailability (Has no native function)
	void UpdateTileAvailability(bool& Available); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.TilePlaylistSetAsMatchmakingPlaylist (Has no native function)
	void TilePlaylistSetAsMatchmakingPlaylist(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.SetTileSize (Has no native function)
	void SetTileSize(int& NumRowTiles); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.SetDefaultImage (Has no native function)
	void SetDefaultImage(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.PopulateTextFieldsFromCMS (Underlying native function: PopulateTextFieldsFromCMS 0xa6b4998)
	void PopulateTextFieldsFromCMS(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.PlaylistChanged (Has no native function)
	void PlaylistChanged(struct FPlaylistFrontEndData& PlaylistToRepresent); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMatchmakingTile.OnCMSDataUpdated (Has no native function)
	void OnCMSDataUpdated(); // (Event | Public | BlueprintEvent)
};

