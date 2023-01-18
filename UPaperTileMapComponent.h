// Class /Script/Paper2D.PaperTileMapComponent
// Size: 0x5d0
class UPaperTileMapComponent : public UMeshComponent
{
	int MapWidth; // 0x580 (0x4)
	int MapHeight; // 0x584 (0x4)
	int TileWidth; // 0x588 (0x4)
	int TileHeight; // 0x58c (0x4)
	class UPaperTileSet* DefaultLayerTileSet; // 0x590 (0x8)
	class UMaterialInterface* Material; // 0x598 (0x8)
	struct TArray<class UPaperTileLayer*> TileLayers; // 0x5a0 (0x10)
	struct FLinearColor TileMapColor; // 0x5b0 (0x10)
	int UseSingleLayerIndex; // 0x5c0 (0x4)
	bool bUseSingleLayer; // 0x5c4 (0x1)
	unsigned char unreflected_5c5[0x3]; // 0x5c5 (0x3) 
	class UPaperTileMap* TileMap; // 0x5c8 (0x8)

	/* Functions */

	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor (Underlying native function: SetTileMapColor 0x6d2e5dc)
	void SetTileMapColor(struct FLinearColor& NewColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMap (Underlying native function: SetTileMap 0x6d2db94)
	bool SetTileMap(class UPaperTileMap*& NewTileMap); // (Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.SetTile (Underlying native function: SetTile 0x6d2e490)
	void SetTile(int& X, int& Y, int& Layer, struct FPaperTileInfo& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor (Underlying native function: SetLayerColor 0x6d2de4c)
	void SetLayerColor(struct FLinearColor& NewColor, int& Layer); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision (Underlying native function: SetLayerCollision 0x6d2dc28)
	void SetLayerCollision(int& Layer, bool& bHasCollision, bool& bOverrideThickness, float& CustomThickness, bool& bOverrideOffset, float& CustomOffset, bool& bRebuildCollision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness (Underlying native function: SetDefaultCollisionThickness 0x6d2dab4)
	void SetDefaultCollisionThickness(float& Thickness, bool& bRebuildCollision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.ResizeMap (Underlying native function: ResizeMap 0x6d2d958)
	void ResizeMap(int& NewWidthInTiles, int& NewHeightInTiles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision (Underlying native function: RebuildCollision 0x6d2d8b0)
	void RebuildCollision(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap (Underlying native function: OwnsTileMap 0x6d2d850)
	bool OwnsTileMap(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable (Underlying native function: MakeTileMapEditable 0x6d2d764)
	void MakeTileMapEditable(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon (Underlying native function: GetTilePolygon 0x6d2cf50)
	void GetTilePolygon(int& TileX, int& TileY, struct TArray<struct FVector>& Points, int& LayerIndex, bool& bWorldSpace); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor (Underlying native function: GetTileMapColor 0x6d2cf34)
	struct FLinearColor GetTileMapColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition (Underlying native function: GetTileCornerPosition 0x6d2cde0)
	struct FVector GetTileCornerPosition(int& TileX, int& TileY, int& LayerIndex, bool& bWorldSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition (Underlying native function: GetTileCenterPosition 0x6d2cc8c)
	struct FVector GetTileCenterPosition(int& TileX, int& TileY, int& LayerIndex, bool& bWorldSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.GetTile (Underlying native function: GetTile 0x6d2cb54)
	struct FPaperTileInfo GetTile(int& X, int& Y, int& Layer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.GetMapSize (Underlying native function: GetMapSize 0x6d2c7cc)
	void GetMapSize(int& MapWidth, int& MapHeight, int& NumLayers); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor (Underlying native function: GetLayerColor 0x6d2c71c)
	struct FLinearColor GetLayerColor(int& Layer); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap (Underlying native function: CreateNewTileMap 0x6d2c290)
	void CreateNewTileMap(int& MapWidth, int& MapHeight, int& TileWidth, int& TileHeight, float& PixelsPerUnrealUnit, bool& bCreateLayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer (Underlying native function: AddNewLayer 0x6d2bfc8)
	class UPaperTileLayer* AddNewLayer(); // (Final | Native | Public | BlueprintCallable)
};

