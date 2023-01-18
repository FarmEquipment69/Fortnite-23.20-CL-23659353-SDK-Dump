// Class /Script/FortniteGame.FortMissionPowerPointsInterface
// Size: 0x28
class IFortMissionPowerPointsInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetPowerPointsCost (Underlying native function: GetPowerPointsCost 0x8b2b6c8)
	float GetPowerPointsCost(float& LerpValue); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetMaxRangeLerpValue (Underlying native function: GetMaxRangeLerpValue 0x8b2b070)
	float GetMaxRangeLerpValue(float& PointsAvailable, float& PreviousLerpValue); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetInitialRangeLerpValue (Underlying native function: GetInitialRangeLerpValue 0x87b3040)
	float GetInitialRangeLerpValue(float& PointsAvailable); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetAvailabilityWeight (Underlying native function: GetAvailabilityWeight 0x87b30d8)
	float GetAvailabilityWeight(float& DifficultyLevel); // (Native | Public | Const)
};

