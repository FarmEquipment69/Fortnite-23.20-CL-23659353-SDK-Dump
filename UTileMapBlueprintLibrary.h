// Class /Script/Paper2D.TileMapBlueprintLibrary
// Size: 0x28
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Paper2D.TileMapBlueprintLibrary.MakeTile (Underlying native function: MakeTile 0x6d2d578)
	static struct FPaperTileInfo MakeTile(int& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileUserData (Underlying native function: GetTileUserData 0x6d2d1d0)
	static struct FName GetTileUserData(struct FPaperTileInfo& Tile); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileTransform (Underlying native function: GetTileTransform 0x6d2d108)
	static struct FTransform GetTileTransform(struct FPaperTileInfo& Tile); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Paper2D.TileMapBlueprintLibrary.BreakTile (Underlying native function: BreakTile 0x6d2c034)
	static void BreakTile(struct FPaperTileInfo& Tile, int& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

