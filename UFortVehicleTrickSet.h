// Class /Script/FortniteGame.FortVehicleTrickSet
// Size: 0x140
class UFortVehicleTrickSet : public UPrimaryDataAsset
{
	struct FDataTableRowHandle Basics; // 0x30 (0x10)
	struct TArray<struct FFortVehicleIncrementTrick> RollTricks; // 0x40 (0x10)
	struct TArray<struct FFortVehicleIncrementTrick> ReverseRollTricks; // 0x50 (0x10)
	struct TArray<struct FFortVehicleIncrementTrick> YawTricks; // 0x60 (0x10)
	struct TArray<struct FFortVehicleIncrementTrick> ReverseYawTricks; // 0x70 (0x10)
	struct TArray<struct FFortVehicleIncrementTrick> PitchTricks; // 0x80 (0x10)
	struct TArray<struct FFortVehicleIncrementTrick> ReversePitchTricks; // 0x90 (0x10)
	struct FFortVehicleGenericTrick GenericTrick1; // 0xa0 (0x28)
	struct FFortVehicleGenericTrick GenericTrick2; // 0xc8 (0x28)
	struct FFortVehicleGenericTrick GenericTrick3; // 0xf0 (0x28)
	struct FFortVehicleGenericTrick GenericTrick4; // 0x118 (0x28)
};

