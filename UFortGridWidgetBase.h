// Class /Script/FortniteUI.FortGridWidgetBase
// Size: 0x2e0
class UFortGridWidgetBase : public UContentWidget
{
	class UClass* ClearWidgetType; // 0x160 (0x8)
	float TileWidth; // 0x168 (0x4)
	float TileHeight; // 0x16c (0x4)
	int TilesAcross; // 0x170 (0x4)
	int TilesDown; // 0x174 (0x4)
	bool bShrinkToFit; // 0x178 (0x1)
	unsigned char unreflected_179[0x3]; // 0x179 (0x3) 
	float PeekOverflowTilePercentage; // 0x17c (0x4)
	struct FMargin TilePadding; // 0x180 (0x10)
	struct FSlateBrush GridBackground; // 0x190 (0xc0)
	struct FMargin GridBackgroundPadding; // 0x250 (0x10)
	struct TArray<class UObject*> DataProvider; // 0x260 (0x10)
	struct FMulticastInlineDelegate OnTileGenerated; // 0x270 (0x10)
	struct FMulticastInlineDelegate OnTileClicked; // 0x280 (0x10)
	struct FMulticastInlineDelegate OnMouseEnterTile; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnMouseLeaveTile; // 0x2a0 (0x10)
	class UClass* TileWidgetType; // 0x2b0 (0x8)
	enum EGridSortKind SortKind; // 0x2b8 (0x1)
	bool bReversed; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x2]; // 0x2ba (0x2) 
	struct FDelegate GetSortKeyFor; // 0x2bc (0xc)
	unsigned char padding_2c8[0x18]; // 0x2c8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTileWidth (Underlying native function: SetTileWidth 0xa7c411c)
	void SetTileWidth(float& Width); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTilesDown (Underlying native function: SetTilesDown 0xa7c4224)
	void SetTilesDown(int& Down); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTilesAcross (Underlying native function: SetTilesAcross 0xa7c41a4)
	void SetTilesAcross(int& Across); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTilePadding (Underlying native function: SetTilePadding 0xa7c4094)
	void SetTilePadding(struct FMargin& Padding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTileHeight (Underlying native function: SetTileHeight 0xa7c400c)
	void SetTileHeight(float& Height); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage (Underlying native function: SetPeekOverflowTilePercentage 0xa7c3bd0)
	void SetPeekOverflowTilePercentage(float& Percent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetDataProvider (Underlying native function: SetDataProvider 0xa7c3a70)
	void SetDataProvider(struct TArray<class UObject*>& Data); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetClearWidgetType (Underlying native function: SetClearWidgetType 0xa7c39f0)
	void SetClearWidgetType(class UClass*& InClearWidgetType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.GetTiles (Underlying native function: GetTiles 0x8cbf4e0)
	struct TArray<class UFortGridPickerTile*> GetTiles(); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGridWidgetBase.GetTileForObject (Underlying native function: GetTileForObject 0xa7c3048)
	class UFortGridPickerTile* GetTileForObject(class UObject*& Object); // (Native | Public | BlueprintCallable | BlueprintPure)
};

