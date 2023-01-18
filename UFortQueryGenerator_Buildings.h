// Class /Script/FortniteAI.FortQueryGenerator_Buildings
// Size: 0x218
class UFortQueryGenerator_Buildings : public UEnvQueryGenerator
{
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50 (0x30)
	class UFortAIAssignmentSettings* AssignmentSettings; // 0x80 (0x8)
	class UClass* BuildingGridVolumeCenter; // 0x88 (0x8)
	struct FAIDataProviderIntValue HorizontalBuildingCellRadius; // 0x90 (0x38)
	struct FAIDataProviderIntValue BuildingCellsAbove; // 0xc8 (0x38)
	struct FAIDataProviderIntValue BuildingCellsBelow; // 0x100 (0x38)
	struct FAIDataProviderBoolValue bIncludeWalls; // 0x138 (0x38)
	struct FAIDataProviderBoolValue bIncludeFloors; // 0x170 (0x38)
	struct FAIDataProviderBoolValue bIncludeCenterCell; // 0x1a8 (0x38)
	struct FAIDataProviderIntValue MaxBuildingActorsPerVolumeCenterToCollect; // 0x1e0 (0x38)
};

