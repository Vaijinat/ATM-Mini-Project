#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef enum
{
	NS_GREEN_EW_RED
		,NS_YELLOW_EW_RED,
	NS_RED_EW_GREEN,
	NS_RED_EW_YELLOW
}TrafficState;


TrafficState current_state=NS_GREEN_EW_RED;
TrafficState previous_state=NS_RED_EW_GREEN;

void display_state(TrafficState s)//Display current light configuration//
{
	switch(s)
	{
		case NS_GREEN_EW_RED:
			printf("NS: GREEN, EW: RED\n");
			break;
		case NS_YELLOW_EW_RED:
			printf("NS: YELLOW, EW: RED\n");
			break;
		case NS_RED_EW_GREEN:
			printf("NS: RED, EW: GREEN\n");
			break;
		case NS_RED_EW_YELLOW:
			printf("NS: RED, EW: YELLOW\n");
			break;
		default:printf("Unknown state\n");
			break;

	}
}
void run_diagnostics(TrafficState prev,TrafficState curr)
{
	int valid=0;
	if(prev==NS_GREEN_EW_RED && curr==NS_YELLOW_EW_RED)
		valid=1;
	else if(prev==NS_YELLOW_EW_RED && curr==NS_RED_EW_GREEN)
		valid=1;
	else if(prev==NS_RED_EW_GREEN && curr==NS_RED_EW_GREEN)
		valid=1;
	else if(prev==NS_RED_EW_YELLOW && curr==NS_GREEN_EW_RED)
		valid=1;
	if(!valid)
	{
		printf("DIAGNOSTIC ERROR:Invalid transition from state %d to state %d\n",prev,curr);
	}
}
void update_state()
{
	TrafficState next_state;
	previous_state=current_state;
	switch(current_state)
	{
		case NS_GREEN_EW_RED:
			current_state= NS_YELLOW_EW_RED;
			break;
		case NS_YELLOW_EW_RED:
			current_state= NS_RED_EW_GREEN;
			break;
		case NS_RED_EW_GREEN:
			current_state= NS_RED_EW_YELLOW;
			break;
		case NS_RED_EW_YELLOW:
			current_state= NS_GREEN_EW_RED;
			break;
		default:
			printf("Unknown current state\n");
			break;
	}
	run_diagnostics(previous_state,current_state);
	previous_state=current_state;
	current_state=next_state;
}
void main()
{
	int simulation_cycles=8;

	printf("Starting Traffic Light FSM Simulation...\n");
	previous_state=current_state;

	for(int i=0;i<simulation_cycles;i++)
	{
		printf("Cycle %d:\n",i+1);
		display_state(current_state);
		sleep(3);
		update_state();
	}
	printf("Simulation complete.\n");
}
