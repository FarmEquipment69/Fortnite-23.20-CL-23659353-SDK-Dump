// Class /Script/AIModule.AISense
// Size: 0x80
class UAISense : public UObject
{
	float DefaultExpirationAge; // 0x28 (0x4)
	enum EAISenseNotifyType NotifyType; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	unsigned char bWantsNewPawnNotification; // 0x30 (0x1)
	unsigned char bAutoRegisterAllPawnsAsSources; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UAIPerceptionSystem* PerceptionSystemInstance; // 0x38 (0x8)
	unsigned char padding_40[0x40]; // 0x40 (0x40)
};

