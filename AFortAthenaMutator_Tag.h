// Class /Script/FortniteGame.FortAthenaMutator_Tag
// Size: 0x6c0
class AFortAthenaMutator_Tag : public AFortAthenaMutator_GameModeBase
{
	struct FScalableFloat TimerLength; // 0x450 (0x28)
	struct FTeamPawnColor_VisualData RedTeamVisuals; // 0x478 (0x20)
	struct FTeamPawnColor_VisualData BlueTeamVisuals; // 0x498 (0x20)
	unsigned char unreflected_4b8[0x8]; // 0x4b8 (0x8) 
	struct FSlateBrush BlueTeamMapBrush; // 0x4c0 (0xc0)
	struct FVector2D BlueTeamMapScale; // 0x580 (0x10)
	float ServerEndTime; // 0x590 (0x4)
	unsigned char RedTeam; // 0x594 (0x1)
	unsigned char BlueTeam; // 0x595 (0x1)
	unsigned char RedTeamSquad; // 0x596 (0x1)
	unsigned char unreflected_597[0x1]; // 0x597 (0x1) 
	struct FTagTeamInfoArray TagTeamInfo; // 0x598 (0x118)
	struct TArray<class AFortPlayerControllerAthena*> SeenControllers; // 0x6b0 (0x10)
};

