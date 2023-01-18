// Class /Script/FortniteUI.AthenaScorePopWidgetBase
// Size: 0x2d0
class UAthenaScorePopWidgetBase : public UFortHUDElementWidget
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaScorePopWidgetBase.OnNewScoreEarned (Has no native function)
	void OnNewScoreEarned(int& NewScoreValue, struct FText& NewScoreTypeText, int& BigScoreThreshold); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaScorePopWidgetBase.HandleNewScoreEarned (Underlying native function: HandleNewScoreEarned 0xa4af90c)
	void HandleNewScoreEarned(int& NewPoints, enum EAthenaScoringEvent& ScoreType); // (Final | Native | Protected)
};

