#pragma once

enum class EPlayerState { Idle, Running, Jumping, Climbing };
enum class EItemQuality { Common, Uncommon, Rare, Epic, Legendary };

void EvaluateItemQuality();

void EvaluatePlayerState();

void RunControlFlowExperiment();