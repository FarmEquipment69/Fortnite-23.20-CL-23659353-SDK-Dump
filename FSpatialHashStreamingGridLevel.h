// ScriptStruct /Script/Engine.SpatialHashStreamingGridLevel
// Size: 0x60
struct FSpatialHashStreamingGridLevel
{
	struct TArray<struct FSpatialHashStreamingGridLayerCell> LayerCells; // 0x0 (0x10)
	struct TMap<int64_t, int> LayerCellsMapping; // 0x10 (0x50)
};

