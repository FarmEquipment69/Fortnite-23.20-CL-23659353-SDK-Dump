// ScriptStruct /Script/FortniteUI.BarrierObjectState
// Size: 0x10
struct FBarrierObjectState
{
	class AAthenaBarrierObjective* ObjectiveActor; // 0x0 (0x8)
	unsigned char TeamNum; // 0x8 (0x1)
	enum EBarrierFoodTeam FoodTeam; // 0x9 (0x1)
	enum EBarrierObjectiveDamageState DamageState; // 0xa (0x1)
	unsigned char padding_b[0x5]; // 0xb (0x5)
};

