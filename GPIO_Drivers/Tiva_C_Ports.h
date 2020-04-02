#ifndef TIVA_C_PORTS
#define TIVA_C_PORTS

/*
	Port A APB Macros
*/

#define GPIO_PORTA_APB_BASE         ((volatile uint32_t *)0x40004000)     //Base
#define GPIO_PORTA_APB_DATA_R       (*((volatile uint32_t *)0x400043FC))  //Data
#define GPIO_PORTA_APB_DIR_R        (*((volatile uint32_t *)0x40004400))  //Direction
#define GPIO_PORTA_APB_IS_R         (*((volatile uint32_t *)0x40004404))  //Interrupt Sense
#define GPIO_PORTA_APB_IBE_R        (*((volatile uint32_t *)0x40004408))  //Interrupt Both Edges
#define GPIO_PORTA_APB_IEV_R        (*((volatile uint32_t *)0x4000440C))  //Interrupt Event
#define GPIO_PORTA_APB_IM_R         (*((volatile uint32_t *)0x40004410))  //Interrupt Mask
#define GPIO_PORTA_APB_RIS_R        (*((volatile uint32_t *)0x40004414))  //Raw Interrupt Status
#define GPIO_PORTA_APB_MIS_R        (*((volatile uint32_t *)0x40004418))  //Masked Interrupt Status
#define GPIO_PORTA_APB_ICR_R        (*((volatile uint32_t *)0x4000441C))  //Interrupt Clear
#define GPIO_PORTA_APB_AFSEL_R      (*((volatile uint32_t *)0x40004420))  //Alternate Function Select
#define GPIO_PORTA_APB_DR2R_R       (*((volatile uint32_t *)0x40004500))  //2-mA Drive Select
#define GPIO_PORTA_APB_DR4R_R       (*((volatile uint32_t *)0x40004504))  //4-mA Drive Select
#define GPIO_PORTA_APB_DR8R_R       (*((volatile uint32_t *)0x40004508))  //8-mA Drive Select
#define GPIO_PORTA_APB_ODR_R        (*((volatile uint32_t *)0x4000450C))  //Open Drain Select
#define GPIO_PORTA_APB_PUR_R        (*((volatile uint32_t *)0x40004510))  //Pull-Up Select
#define GPIO_PORTA_APB_PDR_R        (*((volatile uint32_t *)0x40004514))  //Pull-Down Select
#define GPIO_PORTA_APB_SLR_R        (*((volatile uint32_t *)0x40004518))  //Slew Rate Control Select
#define GPIO_PORTA_APB_DEN_R        (*((volatile uint32_t *)0x4000451C))  //Digital Enable
#define GPIO_PORTA_APB_LOCK_R       (*((volatile uint32_t *)0x40004520))  //Lock
#define GPIO_PORTA_APB_CR_R         (*((volatile uint32_t *)0x40004524))  //Commit
#define GPIO_PORTA_APB_AMSEL_R      (*((volatile uint32_t *)0x40004528))  //Analog Mode Select
#define GPIO_PORTA_APB_PCTL_R       (*((volatile uint32_t *)0x4000452C))  //Port Control
#define GPIO_PORTA_APB_ADCCTL_R     (*((volatile uint32_t *)0x40004530))  //ADC Control
#define GPIO_PORTA_APB_DMACTL_R     (*((volatile uint32_t *)0x40004534))  //DMA Control
	
// Port A APB pins specific addresses 
#define GPIO_PORTA_APB_DATA_PIN7       (*((volatile uint32_t *)0x40004200))  //Pin 7 access
#define GPIO_PORTA_APB_DATA_PIN6       (*((volatile uint32_t *)0x40004100))  //Pin 6 access
#define GPIO_PORTA_APB_DATA_PIN5       (*((volatile uint32_t *)0x40004080))  //Pin 5 access
#define GPIO_PORTA_APB_DATA_PIN4       (*((volatile uint32_t *)0x40004040))  //Pin 4 access
#define GPIO_PORTA_APB_DATA_PIN3       (*((volatile uint32_t *)0x40004020))  //Pin 3 access
#define GPIO_PORTA_APB_DATA_PIN2       (*((volatile uint32_t *)0x40004010))  //Pin 2 access
#define GPIO_PORTA_APB_DATA_PIN1       (*((volatile uint32_t *)0x40004008))  //Pin 1 access
#define GPIO_PORTA_APB_DATA_PIN0       (*((volatile uint32_t *)0x40004004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTA_APB_PeriphID4_R     (*((volatile uint32_t *)0x40004FD0))  //Peripheral Identification 4
#define GPIO_PORTA_APB_PeriphID5_R     (*((volatile uint32_t *)0x40004FD4))  //Peripheral Identification 5
#define GPIO_PORTA_APB_PeriphID6_R     (*((volatile uint32_t *)0x40004FD8))  //Peripheral Identification 6
#define GPIO_PORTA_APB_PeriphID7_R     (*((volatile uint32_t *)0x40004FDC))  //Peripheral Identification 7
#define GPIO_PORTA_APB_PeriphID0_R     (*((volatile uint32_t *)0x40004FE0))  //Peripheral Identification 0
#define GPIO_PORTA_APB_PeriphID1_R     (*((volatile uint32_t *)0x40004FE4))  //Peripheral Identification 1
#define GPIO_PORTA_APB_PeriphID2_R     (*((volatile uint32_t *)0x40004FE8))  //Peripheral Identification 2
#define GPIO_PORTA_APB_PeriphID3_R     (*((volatile uint32_t *)0x40004FEC))  //Peripheral Identification 3
#define GPIO_PORTA_APB_PCellID0_R      (*((volatile uint32_t *)0x40004FF0))  //PrimeCell Identification 0
#define GPIO_PORTA_APB_PCellID1_R      (*((volatile uint32_t *)0x40004FF4))  //PrimeCell Identification 1
#define GPIO_PORTA_APB_PCellID2_R      (*((volatile uint32_t *)0x40004FF8))  //PrimeCell Identification 2
#define GPIO_PORTA_APB_PCellID3_R      (*((volatile uint32_t *)0x40004FFC))  //PrimeCell Identification 3
	



/*
	Port A AHB Macros
*/

#define GPIO_PORTA_AHB_BASE         ((volatile uint32_t *)0x40058000)     //Base
#define GPIO_PORTA_AHB_DATA_R       (*((volatile uint32_t *)0x400583FC))  //Data
#define GPIO_PORTA_AHB_DIR_R        (*((volatile uint32_t *)0x40058400))  //Direction
#define GPIO_PORTA_AHB_IS_R         (*((volatile uint32_t *)0x40058404))  //Interrupt Sense
#define GPIO_PORTA_AHB_IBE_R        (*((volatile uint32_t *)0x40058408))  //Interrupt Both Edges
#define GPIO_PORTA_AHB_IEV_R        (*((volatile uint32_t *)0x4005840C))  //Interrupt Event
#define GPIO_PORTA_AHB_IM_R         (*((volatile uint32_t *)0x40058410))  //Interrupt Mask
#define GPIO_PORTA_AHB_RIS_R        (*((volatile uint32_t *)0x40058414))  //Raw Interrupt Status
#define GPIO_PORTA_AHB_MIS_R        (*((volatile uint32_t *)0x40058418))  //Masked Interrupt Status
#define GPIO_PORTA_AHB_ICR_R        (*((volatile uint32_t *)0x4005841C))  //Interrupt Clear
#define GPIO_PORTA_AHB_AFSEL_R      (*((volatile uint32_t *)0x40058420))  //Alternate Function Select
#define GPIO_PORTA_AHB_DR2R_R       (*((volatile uint32_t *)0x40058500))  //2-mA Drive Select
#define GPIO_PORTA_AHB_DR4R_R       (*((volatile uint32_t *)0x40058504))  //4-mA Drive Select
#define GPIO_PORTA_AHB_DR8R_R       (*((volatile uint32_t *)0x40058508))  //8-mA Drive Select
#define GPIO_PORTA_AHB_ODR_R        (*((volatile uint32_t *)0x4005850C))  //Open Drain Select
#define GPIO_PORTA_AHB_PUR_R        (*((volatile uint32_t *)0x40058510))  //Pull-Up Select
#define GPIO_PORTA_AHB_PDR_R        (*((volatile uint32_t *)0x40058514))  //Pull-Down Select
#define GPIO_PORTA_AHB_SLR_R        (*((volatile uint32_t *)0x40058518))  //Slew Rate Control Select
#define GPIO_PORTA_AHB_DEN_R        (*((volatile uint32_t *)0x4005851C))  //Digital Enable
#define GPIO_PORTA_AHB_LOCK_R       (*((volatile uint32_t *)0x40058520))  //Lock
#define GPIO_PORTA_AHB_CR_R         (*((volatile uint32_t *)0x40058524))  //Commit
#define GPIO_PORTA_AHB_AMSEL_R      (*((volatile uint32_t *)0x40058528))  //Analog Mode Select
#define GPIO_PORTA_AHB_PCTL_R       (*((volatile uint32_t *)0x4005852C))  //Port Control
#define GPIO_PORTA_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40058530))  //ADC Control
#define GPIO_PORTA_AHB_DMACTL_R     (*((volatile uint32_t *)0x40058534))  //DMA Control
	
// Port A AHB pins specific addresses 
#define GPIO_PORTA_AHB_DATA_PIN7       (*((volatile uint32_t *)0x40058200))  //Pin 7 access
#define GPIO_PORTA_AHB_DATA_PIN6       (*((volatile uint32_t *)0x40058100))  //Pin 6 access
#define GPIO_PORTA_AHB_DATA_PIN5       (*((volatile uint32_t *)0x40058080))  //Pin 5 access
#define GPIO_PORTA_AHB_DATA_PIN4       (*((volatile uint32_t *)0x40058040))  //Pin 4 access
#define GPIO_PORTA_AHB_DATA_PIN3       (*((volatile uint32_t *)0x40058020))  //Pin 3 access
#define GPIO_PORTA_AHB_DATA_PIN2       (*((volatile uint32_t *)0x40058010))  //Pin 2 access
#define GPIO_PORTA_AHB_DATA_PIN1       (*((volatile uint32_t *)0x40058008))  //Pin 1 access
#define GPIO_PORTA_AHB_DATA_PIN0       (*((volatile uint32_t *)0x40058004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTA_AHB_PeriphID4_R     (*((volatile uint32_t *)0x40058FD0))  //Peripheral Identification 4
#define GPIO_PORTA_AHB_PeriphID5_R     (*((volatile uint32_t *)0x40058FD4))  //Peripheral Identification 5
#define GPIO_PORTA_AHB_PeriphID6_R     (*((volatile uint32_t *)0x40058FD8))  //Peripheral Identification 6
#define GPIO_PORTA_AHB_PeriphID7_R     (*((volatile uint32_t *)0x40058FDC))  //Peripheral Identification 7
#define GPIO_PORTA_AHB_PeriphID0_R     (*((volatile uint32_t *)0x40058FE0))  //Peripheral Identification 0
#define GPIO_PORTA_AHB_PeriphID1_R     (*((volatile uint32_t *)0x40058FE4))  //Peripheral Identification 1
#define GPIO_PORTA_AHB_PeriphID2_R     (*((volatile uint32_t *)0x40058FE8))  //Peripheral Identification 2
#define GPIO_PORTA_AHB_PeriphID3_R     (*((volatile uint32_t *)0x40058FEC))  //Peripheral Identification 3
#define GPIO_PORTA_AHB_PCellID0_R      (*((volatile uint32_t *)0x40058FF0))  //PrimeCell Identification 0
#define GPIO_PORTA_AHB_PCellID1_R      (*((volatile uint32_t *)0x40058FF4))  //PrimeCell Identification 1
#define GPIO_PORTA_AHB_PCellID2_R      (*((volatile uint32_t *)0x40058FF8))  //PrimeCell Identification 2
#define GPIO_PORTA_AHB_PCellID3_R      (*((volatile uint32_t *)0x40058FFC))  //PrimeCell Identification 3
	
/*****************************************************************************/

/*
	Port B APB Macros
*/

#define GPIO_PORTB_APB_BASE         ((volatile uint32_t *)0x40005000)     //Base
#define GPIO_PORTB_APB_DATA_R       (*((volatile uint32_t *)0x400053FC))  //Data
#define GPIO_PORTB_APB_DIR_R        (*((volatile uint32_t *)0x40005400))  //Direction
#define GPIO_PORTB_APB_IS_R         (*((volatile uint32_t *)0x40005404))  //Interrupt Sense
#define GPIO_PORTB_APB_IBE_R        (*((volatile uint32_t *)0x40005408))  //Interrupt Both Edges
#define GPIO_PORTB_APB_IEV_R        (*((volatile uint32_t *)0x4000540C))  //Interrupt Event
#define GPIO_PORTB_APB_IM_R         (*((volatile uint32_t *)0x40005410))  //Interrupt Mask
#define GPIO_PORTB_APB_RIS_R        (*((volatile uint32_t *)0x40005414))  //Raw Interrupt Status
#define GPIO_PORTB_APB_MIS_R        (*((volatile uint32_t *)0x40005418))  //Masked Interrupt Status
#define GPIO_PORTB_APB_ICR_R        (*((volatile uint32_t *)0x4000541C))  //Interrupt Clear
#define GPIO_PORTB_APB_AFSEL_R      (*((volatile uint32_t *)0x40005420))  //Alternate Function Select
#define GPIO_PORTB_APB_DR2R_R       (*((volatile uint32_t *)0x40005500))  //2-mA Drive Select
#define GPIO_PORTB_APB_DR4R_R       (*((volatile uint32_t *)0x40005504))  //4-mA Drive Select
#define GPIO_PORTB_APB_DR8R_R       (*((volatile uint32_t *)0x40005508))  //8-mA Drive Select
#define GPIO_PORTB_APB_ODR_R        (*((volatile uint32_t *)0x4000550C))  //Open Drain Select
#define GPIO_PORTB_APB_PUR_R        (*((volatile uint32_t *)0x40005510))  //Pull-Up Select
#define GPIO_PORTB_APB_PDR_R        (*((volatile uint32_t *)0x40005514))  //Pull-Down Select
#define GPIO_PORTB_APB_SLR_R        (*((volatile uint32_t *)0x40005518))  //Slew Rate Control Select
#define GPIO_PORTB_APB_DEN_R        (*((volatile uint32_t *)0x4000551C))  //Digital Enable
#define GPIO_PORTB_APB_LOCK_R       (*((volatile uint32_t *)0x40005520))  //Lock
#define GPIO_PORTB_APB_CR_R         (*((volatile uint32_t *)0x40005524))  //Commit
#define GPIO_PORTB_APB_AMSEL_R      (*((volatile uint32_t *)0x40005528))  //Analog Mode Select
#define GPIO_PORTB_APB_PCTL_R       (*((volatile uint32_t *)0x4000552C))  //Port Control
#define GPIO_PORTB_APB_ADCCTL_R     (*((volatile uint32_t *)0x40005530))  //ADC Control
#define GPIO_PORTB_APB_DMACTL_R     (*((volatile uint32_t *)0x40005534))  //DMA Control
	
// Port B APB pins specific addresses 
#define GPIO_PORTB_APB_DATA_PIN7       (*((volatile uint32_t *)0x40005200))  //Pin 7 access
#define GPIO_PORTB_APB_DATA_PIN6       (*((volatile uint32_t *)0x40005100))  //Pin 6 access
#define GPIO_PORTB_APB_DATA_PIN5       (*((volatile uint32_t *)0x40005080))  //Pin 5 access
#define GPIO_PORTB_APB_DATA_PIN4       (*((volatile uint32_t *)0x40005040))  //Pin 4 access
#define GPIO_PORTB_APB_DATA_PIN3       (*((volatile uint32_t *)0x40005020))  //Pin 3 access
#define GPIO_PORTB_APB_DATA_PIN2       (*((volatile uint32_t *)0x40005010))  //Pin 2 access
#define GPIO_PORTB_APB_DATA_PIN1       (*((volatile uint32_t *)0x40005008))  //Pin 1 access
#define GPIO_PORTB_APB_DATA_PIN0       (*((volatile uint32_t *)0x40005004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTB_APB_PeriphID4_R     (*((volatile uint32_t *)0x40005FD0))  //Peripheral Identification 4
#define GPIO_PORTB_APB_PeriphID5_R     (*((volatile uint32_t *)0x40005FD4))  //Peripheral Identification 5
#define GPIO_PORTB_APB_PeriphID6_R     (*((volatile uint32_t *)0x40005FD8))  //Peripheral Identification 6
#define GPIO_PORTB_APB_PeriphID7_R     (*((volatile uint32_t *)0x40005FDC))  //Peripheral Identification 7
#define GPIO_PORTB_APB_PeriphID0_R     (*((volatile uint32_t *)0x40005FE0))  //Peripheral Identification 0
#define GPIO_PORTB_APB_PeriphID1_R     (*((volatile uint32_t *)0x40005FE4))  //Peripheral Identification 1
#define GPIO_PORTB_APB_PeriphID2_R     (*((volatile uint32_t *)0x40005FE8))  //Peripheral Identification 2
#define GPIO_PORTB_APB_PeriphID3_R     (*((volatile uint32_t *)0x40005FEC))  //Peripheral Identification 3
#define GPIO_PORTB_APB_PCellID0_R      (*((volatile uint32_t *)0x40005FF0))  //PrimeCell Identification 0
#define GPIO_PORTB_APB_PCellID1_R      (*((volatile uint32_t *)0x40005FF4))  //PrimeCell Identification 1
#define GPIO_PORTB_APB_PCellID2_R      (*((volatile uint32_t *)0x40005FF8))  //PrimeCell Identification 2
#define GPIO_PORTB_APB_PCellID3_R      (*((volatile uint32_t *)0x40005FFC))  //PrimeCell Identification 3
	


/*
	Port B AHB Macros
*/

#define GPIO_PORTB_AHB_BASE         ((volatile uint32_t *)0x40059000)     //Base
#define GPIO_PORTB_AHB_DATA_R       (*((volatile uint32_t *)0x400593FC))  //Data
#define GPIO_PORTB_AHB_DIR_R        (*((volatile uint32_t *)0x40059400))  //Direction
#define GPIO_PORTB_AHB_IS_R         (*((volatile uint32_t *)0x40059404))  //Interrupt Sense
#define GPIO_PORTB_AHB_IBE_R        (*((volatile uint32_t *)0x40059408))  //Interrupt Both Edges
#define GPIO_PORTB_AHB_IEV_R        (*((volatile uint32_t *)0x4005940C))  //Interrupt Event
#define GPIO_PORTB_AHB_IM_R         (*((volatile uint32_t *)0x40059410))  //Interrupt Mask
#define GPIO_PORTB_AHB_RIS_R        (*((volatile uint32_t *)0x40059414))  //Raw Interrupt Status
#define GPIO_PORTB_AHB_MIS_R        (*((volatile uint32_t *)0x40059418))  //Masked Interrupt Status
#define GPIO_PORTB_AHB_ICR_R        (*((volatile uint32_t *)0x4005941C))  //Interrupt Clear
#define GPIO_PORTB_AHB_AFSEL_R      (*((volatile uint32_t *)0x40059420))  //Alternate Function Select
#define GPIO_PORTB_AHB_DR2R_R       (*((volatile uint32_t *)0x40059500))  //2-mA Drive Select
#define GPIO_PORTB_AHB_DR4R_R       (*((volatile uint32_t *)0x40059504))  //4-mA Drive Select
#define GPIO_PORTB_AHB_DR8R_R       (*((volatile uint32_t *)0x40059508))  //8-mA Drive Select
#define GPIO_PORTB_AHB_ODR_R        (*((volatile uint32_t *)0x4005950C))  //Open Drain Select
#define GPIO_PORTB_AHB_PUR_R        (*((volatile uint32_t *)0x40059510))  //Pull-Up Select
#define GPIO_PORTB_AHB_PDR_R        (*((volatile uint32_t *)0x40059514))  //Pull-Down Select
#define GPIO_PORTB_AHB_SLR_R        (*((volatile uint32_t *)0x40059518))  //Slew Rate Control Select
#define GPIO_PORTB_AHB_DEN_R        (*((volatile uint32_t *)0x4005951C))  //Digital Enable
#define GPIO_PORTB_AHB_LOCK_R       (*((volatile uint32_t *)0x40059520))  //Lock
#define GPIO_PORTB_AHB_CR_R         (*((volatile uint32_t *)0x40059524))  //Commit
#define GPIO_PORTB_AHB_AMSEL_R      (*((volatile uint32_t *)0x40059528))  //Analog Mode Select
#define GPIO_PORTB_AHB_PCTL_R       (*((volatile uint32_t *)0x4005952C))  //Port Control
#define GPIO_PORTB_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40059530))  //ADC Control
#define GPIO_PORTB_AHB_DMACTL_R     (*((volatile uint32_t *)0x40059534))  //DMA Control
	
// Port B AHB pins specific addresses 
#define GPIO_PORTB_AHB_DATA_PIN7       (*((volatile uint32_t *)0x40059200))  //Pin 7 access
#define GPIO_PORTB_AHB_DATA_PIN6       (*((volatile uint32_t *)0x40059100))  //Pin 6 access
#define GPIO_PORTB_AHB_DATA_PIN5       (*((volatile uint32_t *)0x40059080))  //Pin 5 access
#define GPIO_PORTB_AHB_DATA_PIN4       (*((volatile uint32_t *)0x40059040))  //Pin 4 access
#define GPIO_PORTB_AHB_DATA_PIN3       (*((volatile uint32_t *)0x40059020))  //Pin 3 access
#define GPIO_PORTB_AHB_DATA_PIN2       (*((volatile uint32_t *)0x40059010))  //Pin 2 access
#define GPIO_PORTB_AHB_DATA_PIN1       (*((volatile uint32_t *)0x40059008))  //Pin 1 access
#define GPIO_PORTB_AHB_DATA_PIN0       (*((volatile uint32_t *)0x40059004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTB_AHB_PeriphID4_R     (*((volatile uint32_t *)0x40059FD0))  //Peripheral Identification 4
#define GPIO_PORTB_AHB_PeriphID5_R     (*((volatile uint32_t *)0x40059FD4))  //Peripheral Identification 5
#define GPIO_PORTB_AHB_PeriphID6_R     (*((volatile uint32_t *)0x40059FD8))  //Peripheral Identification 6
#define GPIO_PORTB_AHB_PeriphID7_R     (*((volatile uint32_t *)0x40059FDC))  //Peripheral Identification 7
#define GPIO_PORTB_AHB_PeriphID0_R     (*((volatile uint32_t *)0x40059FE0))  //Peripheral Identification 0
#define GPIO_PORTB_AHB_PeriphID1_R     (*((volatile uint32_t *)0x40059FE4))  //Peripheral Identification 1
#define GPIO_PORTB_AHB_PeriphID2_R     (*((volatile uint32_t *)0x40059FE8))  //Peripheral Identification 2
#define GPIO_PORTB_AHB_PeriphID3_R     (*((volatile uint32_t *)0x40059FEC))  //Peripheral Identification 3
#define GPIO_PORTB_AHB_PCellID0_R      (*((volatile uint32_t *)0x40059FF0))  //PrimeCell Identification 0
#define GPIO_PORTB_AHB_PCellID1_R      (*((volatile uint32_t *)0x40059FF4))  //PrimeCell Identification 1
#define GPIO_PORTB_AHB_PCellID2_R      (*((volatile uint32_t *)0x40059FF8))  //PrimeCell Identification 2
#define GPIO_PORTB_AHB_PCellID3_R      (*((volatile uint32_t *)0x40059FFC))  //PrimeCell Identification 3
	
/*****************************************************************************/



/*
	Port C APB Macros
*/

#define GPIO_PORTC_APB_BASE         ((volatile uint32_t *)0x40006000)     //Base
#define GPIO_PORTC_APB_DATA_R       (*((volatile uint32_t *)0x400063FC))  //Data
#define GPIO_PORTC_APB_DIR_R        (*((volatile uint32_t *)0x40006400))  //Direction
#define GPIO_PORTC_APB_IS_R         (*((volatile uint32_t *)0x40006404))  //Interrupt Sense
#define GPIO_PORTC_APB_IBE_R        (*((volatile uint32_t *)0x40006408))  //Interrupt Both Edges
#define GPIO_PORTC_APB_IEV_R        (*((volatile uint32_t *)0x4000640C))  //Interrupt Event
#define GPIO_PORTC_APB_IM_R         (*((volatile uint32_t *)0x40006410))  //Interrupt Mask
#define GPIO_PORTC_APB_RIS_R        (*((volatile uint32_t *)0x40006414))  //Raw Interrupt Status
#define GPIO_PORTC_APB_MIS_R        (*((volatile uint32_t *)0x40006418))  //Masked Interrupt Status
#define GPIO_PORTC_APB_ICR_R        (*((volatile uint32_t *)0x4000641C))  //Interrupt Clear
#define GPIO_PORTC_APB_AFSEL_R      (*((volatile uint32_t *)0x40006420))  //Alternate Function Select
#define GPIO_PORTC_APB_DR2R_R       (*((volatile uint32_t *)0x40006500))  //2-mA Drive Select
#define GPIO_PORTC_APB_DR4R_R       (*((volatile uint32_t *)0x40006504))  //4-mA Drive Select
#define GPIO_PORTC_APB_DR8R_R       (*((volatile uint32_t *)0x40006508))  //8-mA Drive Select
#define GPIO_PORTC_APB_ODR_R        (*((volatile uint32_t *)0x4000650C))  //Open Drain Select
#define GPIO_PORTC_APB_PUR_R        (*((volatile uint32_t *)0x40006510))  //Pull-Up Select
#define GPIO_PORTC_APB_PDR_R        (*((volatile uint32_t *)0x40006514))  //Pull-Down Select
#define GPIO_PORTC_APB_SLR_R        (*((volatile uint32_t *)0x40006518))  //Slew Rate Control Select
#define GPIO_PORTC_APB_DEN_R        (*((volatile uint32_t *)0x4000651C))  //Digital Enable
#define GPIO_PORTC_APB_LOCK_R       (*((volatile uint32_t *)0x40006520))  //Lock
#define GPIO_PORTC_APB_CR_R         (*((volatile uint32_t *)0x40006524))  //Commit
#define GPIO_PORTC_APB_AMSEL_R      (*((volatile uint32_t *)0x40006528))  //Analog Mode Select
#define GPIO_PORTC_APB_PCTL_R       (*((volatile uint32_t *)0x4000652C))  //Port Control
#define GPIO_PORTC_APB_ADCCTL_R     (*((volatile uint32_t *)0x40006530))  //ADC Control
#define GPIO_PORTC_APB_DMACTL_R     (*((volatile uint32_t *)0x40006534))  //DMA Control
	
// Port C APB pins specific addresses 
#define GPIO_PORTC_APB_DATA_PIN7       (*((volatile uint32_t *)0x40006200))  //Pin 7 access
#define GPIO_PORTC_APB_DATA_PIN6       (*((volatile uint32_t *)0x40006100))  //Pin 6 access
#define GPIO_PORTC_APB_DATA_PIN5       (*((volatile uint32_t *)0x40006080))  //Pin 5 access
#define GPIO_PORTC_APB_DATA_PIN4       (*((volatile uint32_t *)0x40006040))  //Pin 4 access
#define GPIO_PORTC_APB_DATA_PIN3       (*((volatile uint32_t *)0x40006020))  //Pin 3 access
#define GPIO_PORTC_APB_DATA_PIN2       (*((volatile uint32_t *)0x40006010))  //Pin 2 access
#define GPIO_PORTC_APB_DATA_PIN1       (*((volatile uint32_t *)0x40006008))  //Pin 1 access
#define GPIO_PORTC_APB_DATA_PIN0       (*((volatile uint32_t *)0x40006004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTC_APB_PeriphID4_R     (*((volatile uint32_t *)0x40006FD0))  //Peripheral Identification 4
#define GPIO_PORTC_APB_PeriphID5_R     (*((volatile uint32_t *)0x40006FD4))  //Peripheral Identification 5
#define GPIO_PORTC_APB_PeriphID6_R     (*((volatile uint32_t *)0x40006FD8))  //Peripheral Identification 6
#define GPIO_PORTC_APB_PeriphID7_R     (*((volatile uint32_t *)0x40006FDC))  //Peripheral Identification 7
#define GPIO_PORTC_APB_PeriphID0_R     (*((volatile uint32_t *)0x40006FE0))  //Peripheral Identification 0
#define GPIO_PORTC_APB_PeriphID1_R     (*((volatile uint32_t *)0x40006FE4))  //Peripheral Identification 1
#define GPIO_PORTC_APB_PeriphID2_R     (*((volatile uint32_t *)0x40006FE8))  //Peripheral Identification 2
#define GPIO_PORTC_APB_PeriphID3_R     (*((volatile uint32_t *)0x40006FEC))  //Peripheral Identification 3
#define GPIO_PORTC_APB_PCellID0_R      (*((volatile uint32_t *)0x40006FF0))  //PrimeCell Identification 0
#define GPIO_PORTC_APB_PCellID1_R      (*((volatile uint32_t *)0x40006FF4))  //PrimeCell Identification 1
#define GPIO_PORTC_APB_PCellID2_R      (*((volatile uint32_t *)0x40006FF8))  //PrimeCell Identification 2
#define GPIO_PORTC_APB_PCellID3_R      (*((volatile uint32_t *)0x40006FFC))  //PrimeCell Identification 3
	


/*
	Port C AHB Macros
*/

#define GPIO_PORTC_AHB_BASE         ((volatile uint32_t *)0x4005A000)     //Base
#define GPIO_PORTC_AHB_DATA_R       (*((volatile uint32_t *)0x4005A3FC))  //Data
#define GPIO_PORTC_AHB_DIR_R        (*((volatile uint32_t *)0x4005A400))  //Direction
#define GPIO_PORTC_AHB_IS_R         (*((volatile uint32_t *)0x4005A404))  //Interrupt Sense
#define GPIO_PORTC_AHB_IBE_R        (*((volatile uint32_t *)0x4005A408))  //Interrupt Both Edges
#define GPIO_PORTC_AHB_IEV_R        (*((volatile uint32_t *)0x4005A40C))  //Interrupt Event
#define GPIO_PORTC_AHB_IM_R         (*((volatile uint32_t *)0x4005A410))  //Interrupt Mask
#define GPIO_PORTC_AHB_RIS_R        (*((volatile uint32_t *)0x4005A414))  //Raw Interrupt Status
#define GPIO_PORTC_AHB_MIS_R        (*((volatile uint32_t *)0x4005A418))  //Masked Interrupt Status
#define GPIO_PORTC_AHB_ICR_R        (*((volatile uint32_t *)0x4005A41C))  //Interrupt Clear
#define GPIO_PORTC_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005A420))  //Alternate Function Select
#define GPIO_PORTC_AHB_DR2R_R       (*((volatile uint32_t *)0x4005A500))  //2-mA Drive Select
#define GPIO_PORTC_AHB_DR4R_R       (*((volatile uint32_t *)0x4005A504))  //4-mA Drive Select
#define GPIO_PORTC_AHB_DR8R_R       (*((volatile uint32_t *)0x4005A508))  //8-mA Drive Select
#define GPIO_PORTC_AHB_ODR_R        (*((volatile uint32_t *)0x4005A50C))  //Open Drain Select
#define GPIO_PORTC_AHB_PUR_R        (*((volatile uint32_t *)0x4005A510))  //Pull-Up Select
#define GPIO_PORTC_AHB_PDR_R        (*((volatile uint32_t *)0x4005A514))  //Pull-Down Select
#define GPIO_PORTC_AHB_SLR_R        (*((volatile uint32_t *)0x4005A518))  //Slew Rate Control Select
#define GPIO_PORTC_AHB_DEN_R        (*((volatile uint32_t *)0x4005A51C))  //Digital Enable
#define GPIO_PORTC_AHB_LOCK_R       (*((volatile uint32_t *)0x4005A520))  //Lock
#define GPIO_PORTC_AHB_CR_R         (*((volatile uint32_t *)0x4005A524))  //Commit
#define GPIO_PORTC_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005A528))  //Analog Mode Select
#define GPIO_PORTC_AHB_PCTL_R       (*((volatile uint32_t *)0x4005A52C))  //Port Control
#define GPIO_PORTC_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005A530))  //ADC Control
#define GPIO_PORTC_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005A534))  //DMA Control
	
// Port C AHB pins specific addresses 
#define GPIO_PORTC_AHB_DATA_PIN7       (*((volatile uint32_t *)0x4005A200))  //Pin 7 access
#define GPIO_PORTC_AHB_DATA_PIN6       (*((volatile uint32_t *)0x4005A100))  //Pin 6 access
#define GPIO_PORTC_AHB_DATA_PIN5       (*((volatile uint32_t *)0x4005A080))  //Pin 5 access
#define GPIO_PORTC_AHB_DATA_PIN4       (*((volatile uint32_t *)0x4005A040))  //Pin 4 access
#define GPIO_PORTC_AHB_DATA_PIN3       (*((volatile uint32_t *)0x4005A020))  //Pin 3 access
#define GPIO_PORTC_AHB_DATA_PIN2       (*((volatile uint32_t *)0x4005A010))  //Pin 2 access
#define GPIO_PORTC_AHB_DATA_PIN1       (*((volatile uint32_t *)0x4005A008))  //Pin 1 access
#define GPIO_PORTC_AHB_DATA_PIN0       (*((volatile uint32_t *)0x4005A004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTC_AHB_PeriphID4_R     (*((volatile uint32_t *)0x4005AFD0))  //Peripheral Identification 4
#define GPIO_PORTC_AHB_PeriphID5_R     (*((volatile uint32_t *)0x4005AFD4))  //Peripheral Identification 5
#define GPIO_PORTC_AHB_PeriphID6_R     (*((volatile uint32_t *)0x4005AFD8))  //Peripheral Identification 6
#define GPIO_PORTC_AHB_PeriphID7_R     (*((volatile uint32_t *)0x4005AFDC))  //Peripheral Identification 7
#define GPIO_PORTC_AHB_PeriphID0_R     (*((volatile uint32_t *)0x4005AFE0))  //Peripheral Identification 0
#define GPIO_PORTC_AHB_PeriphID1_R     (*((volatile uint32_t *)0x4005AFE4))  //Peripheral Identification 1
#define GPIO_PORTC_AHB_PeriphID2_R     (*((volatile uint32_t *)0x4005AFE8))  //Peripheral Identification 2
#define GPIO_PORTC_AHB_PeriphID3_R     (*((volatile uint32_t *)0x4005AFEC))  //Peripheral Identification 3
#define GPIO_PORTC_AHB_PCellID0_R      (*((volatile uint32_t *)0x4005AFF0))  //PrimeCell Identification 0
#define GPIO_PORTC_AHB_PCellID1_R      (*((volatile uint32_t *)0x4005AFF4))  //PrimeCell Identification 1
#define GPIO_PORTC_AHB_PCellID2_R      (*((volatile uint32_t *)0x4005AFF8))  //PrimeCell Identification 2
#define GPIO_PORTC_AHB_PCellID3_R      (*((volatile uint32_t *)0x4005AFFC))  //PrimeCell Identification 3
	
/*****************************************************************************/


/*
	Port D APB Macros
*/

#define GPIO_PORTD_APB_BASE         ((volatile uint32_t *)0x40007000)     //Base
#define GPIO_PORTD_APB_DATA_R       (*((volatile uint32_t *)0x400073FC))  //Data
#define GPIO_PORTD_APB_DIR_R        (*((volatile uint32_t *)0x40007400))  //Direction
#define GPIO_PORTD_APB_IS_R         (*((volatile uint32_t *)0x40007404))  //Interrupt Sense
#define GPIO_PORTD_APB_IBE_R        (*((volatile uint32_t *)0x40007408))  //Interrupt Both Edges
#define GPIO_PORTD_APB_IEV_R        (*((volatile uint32_t *)0x4000740C))  //Interrupt Event
#define GPIO_PORTD_APB_IM_R         (*((volatile uint32_t *)0x40007410))  //Interrupt Mask
#define GPIO_PORTD_APB_RIS_R        (*((volatile uint32_t *)0x40007414))  //Raw Interrupt Status
#define GPIO_PORTD_APB_MIS_R        (*((volatile uint32_t *)0x40007418))  //Masked Interrupt Status
#define GPIO_PORTD_APB_ICR_R        (*((volatile uint32_t *)0x4000741C))  //Interrupt Clear
#define GPIO_PORTD_APB_AFSEL_R      (*((volatile uint32_t *)0x40007420))  //Alternate Function Select
#define GPIO_PORTD_APB_DR2R_R       (*((volatile uint32_t *)0x40007500))  //2-mA Drive Select
#define GPIO_PORTD_APB_DR4R_R       (*((volatile uint32_t *)0x40007504))  //4-mA Drive Select
#define GPIO_PORTD_APB_DR8R_R       (*((volatile uint32_t *)0x40007508))  //8-mA Drive Select
#define GPIO_PORTD_APB_ODR_R        (*((volatile uint32_t *)0x4000750C))  //Open Drain Select
#define GPIO_PORTD_APB_PUR_R        (*((volatile uint32_t *)0x40007510))  //Pull-Up Select
#define GPIO_PORTD_APB_PDR_R        (*((volatile uint32_t *)0x40007514))  //Pull-Down Select
#define GPIO_PORTD_APB_SLR_R        (*((volatile uint32_t *)0x40007518))  //Slew Rate Control Select
#define GPIO_PORTD_APB_DEN_R        (*((volatile uint32_t *)0x4000751C))  //Digital Enable
#define GPIO_PORTD_APB_LOCK_R       (*((volatile uint32_t *)0x40007520))  //Lock
#define GPIO_PORTD_APB_CR_R         (*((volatile uint32_t *)0x40007524))  //Commit
#define GPIO_PORTD_APB_AMSEL_R      (*((volatile uint32_t *)0x40007528))  //Analog Mode Select
#define GPIO_PORTD_APB_PCTL_R       (*((volatile uint32_t *)0x4000752C))  //Port Control
#define GPIO_PORTD_APB_ADCCTL_R     (*((volatile uint32_t *)0x40007530))  //ADC Control
#define GPIO_PORTD_APB_DMACTL_R     (*((volatile uint32_t *)0x40007534))  //DMA Control
	
// Port D APB pins specific addresses 
#define GPIO_PORTD_APB_DATA_PIN7       (*((volatile uint32_t *)0x40007200))  //Pin 7 access
#define GPIO_PORTD_APB_DATA_PIN6       (*((volatile uint32_t *)0x40007100))  //Pin 6 access
#define GPIO_PORTD_APB_DATA_PIN5       (*((volatile uint32_t *)0x40007080))  //Pin 5 access
#define GPIO_PORTD_APB_DATA_PIN4       (*((volatile uint32_t *)0x40007040))  //Pin 4 access
#define GPIO_PORTD_APB_DATA_PIN3       (*((volatile uint32_t *)0x40007020))  //Pin 3 access
#define GPIO_PORTD_APB_DATA_PIN2       (*((volatile uint32_t *)0x40007010))  //Pin 2 access
#define GPIO_PORTD_APB_DATA_PIN1       (*((volatile uint32_t *)0x40007008))  //Pin 1 access
#define GPIO_PORTD_APB_DATA_PIN0       (*((volatile uint32_t *)0x40007004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTD_APB_PeriphID4_R     (*((volatile uint32_t *)0x40007FD0))  //Peripheral Identification 4
#define GPIO_PORTD_APB_PeriphID5_R     (*((volatile uint32_t *)0x40007FD4))  //Peripheral Identification 5
#define GPIO_PORTD_APB_PeriphID6_R     (*((volatile uint32_t *)0x40007FD8))  //Peripheral Identification 6
#define GPIO_PORTD_APB_PeriphID7_R     (*((volatile uint32_t *)0x40007FDC))  //Peripheral Identification 7
#define GPIO_PORTD_APB_PeriphID0_R     (*((volatile uint32_t *)0x40007FE0))  //Peripheral Identification 0
#define GPIO_PORTD_APB_PeriphID1_R     (*((volatile uint32_t *)0x40007FE4))  //Peripheral Identification 1
#define GPIO_PORTD_APB_PeriphID2_R     (*((volatile uint32_t *)0x40007FE8))  //Peripheral Identification 2
#define GPIO_PORTD_APB_PeriphID3_R     (*((volatile uint32_t *)0x40007FEC))  //Peripheral Identification 3
#define GPIO_PORTD_APB_PCellID0_R      (*((volatile uint32_t *)0x40007FF0))  //PrimeCell Identification 0
#define GPIO_PORTD_APB_PCellID1_R      (*((volatile uint32_t *)0x40007FF4))  //PrimeCell Identification 1
#define GPIO_PORTD_APB_PCellID2_R      (*((volatile uint32_t *)0x40007FF8))  //PrimeCell Identification 2
#define GPIO_PORTD_APB_PCellID3_R      (*((volatile uint32_t *)0x40007FFC))  //PrimeCell Identification 3
	



/*
	Port D AHB Macros
*/

#define GPIO_PORTD_AHB_BASE         ((volatile uint32_t *)0x4005B000)     //Base
#define GPIO_PORTD_AHB_DATA_R       (*((volatile uint32_t *)0x4005B3FC))  //Data
#define GPIO_PORTD_AHB_DIR_R        (*((volatile uint32_t *)0x4005B400))  //Direction
#define GPIO_PORTD_AHB_IS_R         (*((volatile uint32_t *)0x4005B404))  //Interrupt Sense
#define GPIO_PORTD_AHB_IBE_R        (*((volatile uint32_t *)0x4005B408))  //Interrupt Both Edges
#define GPIO_PORTD_AHB_IEV_R        (*((volatile uint32_t *)0x4005B40C))  //Interrupt Event
#define GPIO_PORTD_AHB_IM_R         (*((volatile uint32_t *)0x4005B410))  //Interrupt Mask
#define GPIO_PORTD_AHB_RIS_R        (*((volatile uint32_t *)0x4005B414))  //Raw Interrupt Status
#define GPIO_PORTD_AHB_MIS_R        (*((volatile uint32_t *)0x4005B418))  //Masked Interrupt Status
#define GPIO_PORTD_AHB_ICR_R        (*((volatile uint32_t *)0x4005B41C))  //Interrupt Clear
#define GPIO_PORTD_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005B420))  //Alternate Function Select
#define GPIO_PORTD_AHB_DR2R_R       (*((volatile uint32_t *)0x4005B500))  //2-mA Drive Select
#define GPIO_PORTD_AHB_DR4R_R       (*((volatile uint32_t *)0x4005B504))  //4-mA Drive Select
#define GPIO_PORTD_AHB_DR8R_R       (*((volatile uint32_t *)0x4005B508))  //8-mA Drive Select
#define GPIO_PORTD_AHB_ODR_R        (*((volatile uint32_t *)0x4005B50C))  //Open Drain Select
#define GPIO_PORTD_AHB_PUR_R        (*((volatile uint32_t *)0x4005B510))  //Pull-Up Select
#define GPIO_PORTD_AHB_PDR_R        (*((volatile uint32_t *)0x4005B514))  //Pull-Down Select
#define GPIO_PORTD_AHB_SLR_R        (*((volatile uint32_t *)0x4005B518))  //Slew Rate Control Select
#define GPIO_PORTD_AHB_DEN_R        (*((volatile uint32_t *)0x4005B51C))  //Digital Enable
#define GPIO_PORTD_AHB_LOCK_R       (*((volatile uint32_t *)0x4005B520))  //Lock
#define GPIO_PORTD_AHB_CR_R         (*((volatile uint32_t *)0x4005B524))  //Commit
#define GPIO_PORTD_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005B528))  //Analog Mode Select
#define GPIO_PORTD_AHB_PCTL_R       (*((volatile uint32_t *)0x4005B52C))  //Port Control
#define GPIO_PORTD_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005B530))  //ADC Control
#define GPIO_PORTD_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005B534))  //DMA Control
	
// Port D AHB pins specific addresses 
#define GPIO_PORTD_AHB_DATA_PIN7       (*((volatile uint32_t *)0x4005B200))  //Pin 7 access
#define GPIO_PORTD_AHB_DATA_PIN6       (*((volatile uint32_t *)0x4005B100))  //Pin 6 access
#define GPIO_PORTD_AHB_DATA_PIN5       (*((volatile uint32_t *)0x4005B080))  //Pin 5 access
#define GPIO_PORTD_AHB_DATA_PIN4       (*((volatile uint32_t *)0x4005B040))  //Pin 4 access
#define GPIO_PORTD_AHB_DATA_PIN3       (*((volatile uint32_t *)0x4005B020))  //Pin 3 access
#define GPIO_PORTD_AHB_DATA_PIN2       (*((volatile uint32_t *)0x4005B010))  //Pin 2 access
#define GPIO_PORTD_AHB_DATA_PIN1       (*((volatile uint32_t *)0x4005B008))  //Pin 1 access
#define GPIO_PORTD_AHB_DATA_PIN0       (*((volatile uint32_t *)0x4005B004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTD_AHB_PeriphID4_R     (*((volatile uint32_t *)0x4005BFD0))  //Peripheral Identification 4
#define GPIO_PORTD_AHB_PeriphID5_R     (*((volatile uint32_t *)0x4005BFD4))  //Peripheral Identification 5
#define GPIO_PORTD_AHB_PeriphID6_R     (*((volatile uint32_t *)0x4005BFD8))  //Peripheral Identification 6
#define GPIO_PORTD_AHB_PeriphID7_R     (*((volatile uint32_t *)0x4005BFDC))  //Peripheral Identification 7
#define GPIO_PORTD_AHB_PeriphID0_R     (*((volatile uint32_t *)0x4005BFE0))  //Peripheral Identification 0
#define GPIO_PORTD_AHB_PeriphID1_R     (*((volatile uint32_t *)0x4005BFE4))  //Peripheral Identification 1
#define GPIO_PORTD_AHB_PeriphID2_R     (*((volatile uint32_t *)0x4005BFE8))  //Peripheral Identification 2
#define GPIO_PORTD_AHB_PeriphID3_R     (*((volatile uint32_t *)0x4005BFEC))  //Peripheral Identification 3
#define GPIO_PORTD_AHB_PCellID0_R      (*((volatile uint32_t *)0x4005BFF0))  //PrimeCell Identification 0
#define GPIO_PORTD_AHB_PCellID1_R      (*((volatile uint32_t *)0x4005BFF4))  //PrimeCell Identification 1
#define GPIO_PORTD_AHB_PCellID2_R      (*((volatile uint32_t *)0x4005BFF8))  //PrimeCell Identification 2
#define GPIO_PORTD_AHB_PCellID3_R      (*((volatile uint32_t *)0x4005BFFC))  //PrimeCell Identification 3
	
/*****************************************************************************/


/*
	Port E APB Macros
*/

#define GPIO_PORTE_APB_BASE         ((volatile uint32_t *)0x40024000)     //Base
#define GPIO_PORTE_APB_DATA_R       (*((volatile uint32_t *)0x400243FC))  //Data
#define GPIO_PORTE_APB_DIR_R        (*((volatile uint32_t *)0x40024400))  //Direction
#define GPIO_PORTE_APB_IS_R         (*((volatile uint32_t *)0x40024404))  //Interrupt Sense
#define GPIO_PORTE_APB_IBE_R        (*((volatile uint32_t *)0x40024408))  //Interrupt Both Edges
#define GPIO_PORTE_APB_IEV_R        (*((volatile uint32_t *)0x4002440C))  //Interrupt Event
#define GPIO_PORTE_APB_IM_R         (*((volatile uint32_t *)0x40024410))  //Interrupt Mask
#define GPIO_PORTE_APB_RIS_R        (*((volatile uint32_t *)0x40024414))  //Raw Interrupt Status
#define GPIO_PORTE_APB_MIS_R        (*((volatile uint32_t *)0x40024418))  //Masked Interrupt Status
#define GPIO_PORTE_APB_ICR_R        (*((volatile uint32_t *)0x4002441C))  //Interrupt Clear
#define GPIO_PORTE_APB_AFSEL_R      (*((volatile uint32_t *)0x40024420))  //Alternate Function Select
#define GPIO_PORTE_APB_DR2R_R       (*((volatile uint32_t *)0x40024500))  //2-mA Drive Select
#define GPIO_PORTE_APB_DR4R_R       (*((volatile uint32_t *)0x40024504))  //4-mA Drive Select
#define GPIO_PORTE_APB_DR8R_R       (*((volatile uint32_t *)0x40024508))  //8-mA Drive Select
#define GPIO_PORTE_APB_ODR_R        (*((volatile uint32_t *)0x4002450C))  //Open Drain Select
#define GPIO_PORTE_APB_PUR_R        (*((volatile uint32_t *)0x40024510))  //Pull-Up Select
#define GPIO_PORTE_APB_PDR_R        (*((volatile uint32_t *)0x40024514))  //Pull-Down Select
#define GPIO_PORTE_APB_SLR_R        (*((volatile uint32_t *)0x40024518))  //Slew Rate Control Select
#define GPIO_PORTE_APB_DEN_R        (*((volatile uint32_t *)0x4002451C))  //Digital Enable
#define GPIO_PORTE_APB_LOCK_R       (*((volatile uint32_t *)0x40024520))  //Lock
#define GPIO_PORTE_APB_CR_R         (*((volatile uint32_t *)0x40024524))  //Commit
#define GPIO_PORTE_APB_AMSEL_R      (*((volatile uint32_t *)0x40024528))  //Analog Mode Select
#define GPIO_PORTE_APB_PCTL_R       (*((volatile uint32_t *)0x4002452C))  //Port Control
#define GPIO_PORTE_APB_ADCCTL_R     (*((volatile uint32_t *)0x40024530))  //ADC Control
#define GPIO_PORTE_APB_DMACTL_R     (*((volatile uint32_t *)0x40024534))  //DMA Control
	
// Port E APB pins specific addresses 
#define GPIO_PORTE_APB_DATA_PIN5       (*((volatile uint32_t *)0x40024080))  //Pin 5 access
#define GPIO_PORTE_APB_DATA_PIN4       (*((volatile uint32_t *)0x40024040))  //Pin 4 access
#define GPIO_PORTE_APB_DATA_PIN3       (*((volatile uint32_t *)0x40024020))  //Pin 3 access
#define GPIO_PORTE_APB_DATA_PIN2       (*((volatile uint32_t *)0x40024010))  //Pin 2 access
#define GPIO_PORTE_APB_DATA_PIN1       (*((volatile uint32_t *)0x40024008))  //Pin 1 access
#define GPIO_PORTE_APB_DATA_PIN0       (*((volatile uint32_t *)0x40024004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTE_APB_PeriphID4_R     (*((volatile uint32_t *)0x40024FD0))  //Peripheral Identification 4
#define GPIO_PORTE_APB_PeriphID5_R     (*((volatile uint32_t *)0x40024FD4))  //Peripheral Identification 5
#define GPIO_PORTE_APB_PeriphID6_R     (*((volatile uint32_t *)0x40024FD8))  //Peripheral Identification 6
#define GPIO_PORTE_APB_PeriphID7_R     (*((volatile uint32_t *)0x40024FDC))  //Peripheral Identification 7
#define GPIO_PORTE_APB_PeriphID0_R     (*((volatile uint32_t *)0x40024FE0))  //Peripheral Identification 0
#define GPIO_PORTE_APB_PeriphID1_R     (*((volatile uint32_t *)0x40024FE4))  //Peripheral Identification 1
#define GPIO_PORTE_APB_PeriphID2_R     (*((volatile uint32_t *)0x40024FE8))  //Peripheral Identification 2
#define GPIO_PORTE_APB_PeriphID3_R     (*((volatile uint32_t *)0x40024FEC))  //Peripheral Identification 3
#define GPIO_PORTE_APB_PCellID0_R      (*((volatile uint32_t *)0x40024FF0))  //PrimeCell Identification 0
#define GPIO_PORTE_APB_PCellID1_R      (*((volatile uint32_t *)0x40024FF4))  //PrimeCell Identification 1
#define GPIO_PORTE_APB_PCellID2_R      (*((volatile uint32_t *)0x40024FF8))  //PrimeCell Identification 2
#define GPIO_PORTE_APB_PCellID3_R      (*((volatile uint32_t *)0x40024FFC))  //PrimeCell Identification 3
	



/*
	Port E AHB Macros
*/

#define GPIO_PORTE_AHB_BASE         ((volatile uint32_t *)0x4005C000)     //Base
#define GPIO_PORTE_AHB_DATA_R       (*((volatile uint32_t *)0x4005C3FC))  //Data
#define GPIO_PORTE_AHB_DIR_R        (*((volatile uint32_t *)0x4005C400))  //Direction
#define GPIO_PORTE_AHB_IS_R         (*((volatile uint32_t *)0x4005C404))  //Interrupt Sense
#define GPIO_PORTE_AHB_IBE_R        (*((volatile uint32_t *)0x4005C408))  //Interrupt Both Edges
#define GPIO_PORTE_AHB_IEV_R        (*((volatile uint32_t *)0x4005C40C))  //Interrupt Event
#define GPIO_PORTE_AHB_IM_R         (*((volatile uint32_t *)0x4005C410))  //Interrupt Mask
#define GPIO_PORTE_AHB_RIS_R        (*((volatile uint32_t *)0x4005C414))  //Raw Interrupt Status
#define GPIO_PORTE_AHB_MIS_R        (*((volatile uint32_t *)0x4005C418))  //Masked Interrupt Status
#define GPIO_PORTE_AHB_ICR_R        (*((volatile uint32_t *)0x4005C41C))  //Interrupt Clear
#define GPIO_PORTE_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005C420))  //Alternate Function Select
#define GPIO_PORTE_AHB_DR2R_R       (*((volatile uint32_t *)0x4005C500))  //2-mA Drive Select
#define GPIO_PORTE_AHB_DR4R_R       (*((volatile uint32_t *)0x4005C504))  //4-mA Drive Select
#define GPIO_PORTE_AHB_DR8R_R       (*((volatile uint32_t *)0x4005C508))  //8-mA Drive Select
#define GPIO_PORTE_AHB_ODR_R        (*((volatile uint32_t *)0x4005C50C))  //Open Drain Select
#define GPIO_PORTE_AHB_PUR_R        (*((volatile uint32_t *)0x4005C510))  //Pull-Up Select
#define GPIO_PORTE_AHB_PDR_R        (*((volatile uint32_t *)0x4005C514))  //Pull-Down Select
#define GPIO_PORTE_AHB_SLR_R        (*((volatile uint32_t *)0x4005C518))  //Slew Rate Control Select
#define GPIO_PORTE_AHB_DEN_R        (*((volatile uint32_t *)0x4005C51C))  //Digital Enable
#define GPIO_PORTE_AHB_LOCK_R       (*((volatile uint32_t *)0x4005C520))  //Lock
#define GPIO_PORTE_AHB_CR_R         (*((volatile uint32_t *)0x4005C524))  //Commit
#define GPIO_PORTE_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005C528))  //Analog Mode Select
#define GPIO_PORTE_AHB_PCTL_R       (*((volatile uint32_t *)0x4005C52C))  //Port Control
#define GPIO_PORTE_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005C530))  //ADC Control
#define GPIO_PORTE_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005C534))  //DMA Control
	
// Port E AHB pins specific addresses 
#define GPIO_PORTE_AHB_DATA_PIN5       (*((volatile uint32_t *)0x4005C080))  //Pin 5 access
#define GPIO_PORTE_AHB_DATA_PIN4       (*((volatile uint32_t *)0x4005C040))  //Pin 4 access
#define GPIO_PORTE_AHB_DATA_PIN3       (*((volatile uint32_t *)0x4005C020))  //Pin 3 access
#define GPIO_PORTE_AHB_DATA_PIN2       (*((volatile uint32_t *)0x4005C010))  //Pin 2 access
#define GPIO_PORTE_AHB_DATA_PIN1       (*((volatile uint32_t *)0x4005C008))  //Pin 1 access
#define GPIO_PORTE_AHB_DATA_PIN0       (*((volatile uint32_t *)0x4005C004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTE_AHB_PeriphID4_R     (*((volatile uint32_t *)0x4005CFD0))  //Peripheral Identification 4
#define GPIO_PORTE_AHB_PeriphID5_R     (*((volatile uint32_t *)0x4005CFD4))  //Peripheral Identification 5
#define GPIO_PORTE_AHB_PeriphID6_R     (*((volatile uint32_t *)0x4005CFD8))  //Peripheral Identification 6
#define GPIO_PORTE_AHB_PeriphID7_R     (*((volatile uint32_t *)0x4005CFDC))  //Peripheral Identification 7
#define GPIO_PORTE_AHB_PeriphID0_R     (*((volatile uint32_t *)0x4005CFE0))  //Peripheral Identification 0
#define GPIO_PORTE_AHB_PeriphID1_R     (*((volatile uint32_t *)0x4005CFE4))  //Peripheral Identification 1
#define GPIO_PORTE_AHB_PeriphID2_R     (*((volatile uint32_t *)0x4005CFE8))  //Peripheral Identification 2
#define GPIO_PORTE_AHB_PeriphID3_R     (*((volatile uint32_t *)0x4005CFEC))  //Peripheral Identification 3
#define GPIO_PORTE_AHB_PCellID0_R      (*((volatile uint32_t *)0x4005CFF0))  //PrimeCell Identification 0
#define GPIO_PORTE_AHB_PCellID1_R      (*((volatile uint32_t *)0x4005CFF4))  //PrimeCell Identification 1
#define GPIO_PORTE_AHB_PCellID2_R      (*((volatile uint32_t *)0x4005CFF8))  //PrimeCell Identification 2
#define GPIO_PORTE_AHB_PCellID3_R      (*((volatile uint32_t *)0x4005CFFC))  //PrimeCell Identification 3
	
/*****************************************************************************/


/*
	Port F APB Macros
*/

#define GPIO_PORTF_APB_BASE         ((volatile uint32_t *)0x40025000)     //Base
#define GPIO_PORTF_APB_DATA_R       (*((volatile uint32_t *)0x400253FC))  //Data
#define GPIO_PORTF_APB_DIR_R        (*((volatile uint32_t *)0x40025400))  //Direction
#define GPIO_PORTF_APB_IS_R         (*((volatile uint32_t *)0x40025404))  //Interrupt Sense
#define GPIO_PORTF_APB_IBE_R        (*((volatile uint32_t *)0x40025408))  //Interrupt Both Edges
#define GPIO_PORTF_APB_IEV_R        (*((volatile uint32_t *)0x4002540C))  //Interrupt Event
#define GPIO_PORTF_APB_IM_R         (*((volatile uint32_t *)0x40025410))  //Interrupt Mask
#define GPIO_PORTF_APB_RIS_R        (*((volatile uint32_t *)0x40025414))  //Raw Interrupt Status
#define GPIO_PORTF_APB_MIS_R        (*((volatile uint32_t *)0x40025418))  //Masked Interrupt Status
#define GPIO_PORTF_APB_ICR_R        (*((volatile uint32_t *)0x4002541C))  //Interrupt Clear
#define GPIO_PORTF_APB_AFSEL_R      (*((volatile uint32_t *)0x40025420))  //Alternate Function Select
#define GPIO_PORTF_APB_DR2R_R       (*((volatile uint32_t *)0x40025500))  //2-mA Drive Select
#define GPIO_PORTF_APB_DR4R_R       (*((volatile uint32_t *)0x40025504))  //4-mA Drive Select
#define GPIO_PORTF_APB_DR8R_R       (*((volatile uint32_t *)0x40025508))  //8-mA Drive Select
#define GPIO_PORTF_APB_ODR_R        (*((volatile uint32_t *)0x4002550C))  //Open Drain Select
#define GPIO_PORTF_APB_PUR_R        (*((volatile uint32_t *)0x40025510))  //Pull-Up Select
#define GPIO_PORTF_APB_PDR_R        (*((volatile uint32_t *)0x40025514))  //Pull-Down Select
#define GPIO_PORTF_APB_SLR_R        (*((volatile uint32_t *)0x40025518))  //Slew Rate Control Select
#define GPIO_PORTF_APB_DEN_R        (*((volatile uint32_t *)0x4002551C))  //Digital Enable
#define GPIO_PORTF_APB_LOCK_R       (*((volatile uint32_t *)0x40025520))  //Lock
#define GPIO_PORTF_APB_CR_R         (*((volatile uint32_t *)0x40025524))  //Commit
#define GPIO_PORTF_APB_AMSEL_R      (*((volatile uint32_t *)0x40025528))  //Analog Mode Select
#define GPIO_PORTF_APB_PCTL_R       (*((volatile uint32_t *)0x4002552C))  //Port Control
#define GPIO_PORTF_APB_ADCCTL_R     (*((volatile uint32_t *)0x40025530))  //ADC Control
#define GPIO_PORTF_APB_DMACTL_R     (*((volatile uint32_t *)0x40025534))  //DMA Control
	
// Port F APB pins specific addresses 
#define GPIO_PORTF_APB_DATA_PIN4       (*((volatile uint32_t *)0x40025040))  //Pin 4 access
#define GPIO_PORTF_APB_DATA_PIN3       (*((volatile uint32_t *)0x40025020))  //Pin 3 access
#define GPIO_PORTF_APB_DATA_PIN2       (*((volatile uint32_t *)0x40025010))  //Pin 2 access
#define GPIO_PORTF_APB_DATA_PIN1       (*((volatile uint32_t *)0x40025008))  //Pin 1 access
#define GPIO_PORTF_APB_DATA_PIN0       (*((volatile uint32_t *)0x40025004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTF_APB_PeriphID4_R     (*((volatile uint32_t *)0x40025FD0))  //Peripheral Identification 4
#define GPIO_PORTF_APB_PeriphID5_R     (*((volatile uint32_t *)0x40025FD4))  //Peripheral Identification 5
#define GPIO_PORTF_APB_PeriphID6_R     (*((volatile uint32_t *)0x40025FD8))  //Peripheral Identification 6
#define GPIO_PORTF_APB_PeriphID7_R     (*((volatile uint32_t *)0x40025FDC))  //Peripheral Identification 7
#define GPIO_PORTF_APB_PeriphID0_R     (*((volatile uint32_t *)0x40025FE0))  //Peripheral Identification 0
#define GPIO_PORTF_APB_PeriphID1_R     (*((volatile uint32_t *)0x40025FE4))  //Peripheral Identification 1
#define GPIO_PORTF_APB_PeriphID2_R     (*((volatile uint32_t *)0x40025FE8))  //Peripheral Identification 2
#define GPIO_PORTF_APB_PeriphID3_R     (*((volatile uint32_t *)0x40025FEC))  //Peripheral Identification 3
#define GPIO_PORTF_APB_PCellID0_R      (*((volatile uint32_t *)0x40025FF0))  //PrimeCell Identification 0
#define GPIO_PORTF_APB_PCellID1_R      (*((volatile uint32_t *)0x40025FF4))  //PrimeCell Identification 1
#define GPIO_PORTF_APB_PCellID2_R      (*((volatile uint32_t *)0x40025FF8))  //PrimeCell Identification 2
#define GPIO_PORTF_APB_PCellID3_R      (*((volatile uint32_t *)0x40025FFC))  //PrimeCell Identification 3
	




/*
	Port F AHB Macros
*/

#define GPIO_PORTF_AHB_BASE         ((volatile uint32_t *)0x4005D000)     //Base
#define GPIO_PORTF_AHB_DATA_R       (*((volatile uint32_t *)0x4005D3FC))  //Data
#define GPIO_PORTF_AHB_DIR_R        (*((volatile uint32_t *)0x4005D400))  //Direction
#define GPIO_PORTF_AHB_IS_R         (*((volatile uint32_t *)0x4005D404))  //Interrupt Sense
#define GPIO_PORTF_AHB_IBE_R        (*((volatile uint32_t *)0x4005D408))  //Interrupt Both Edges
#define GPIO_PORTF_AHB_IEV_R        (*((volatile uint32_t *)0x4005D40C))  //Interrupt Event
#define GPIO_PORTF_AHB_IM_R         (*((volatile uint32_t *)0x4005D410))  //Interrupt Mask
#define GPIO_PORTF_AHB_RIS_R        (*((volatile uint32_t *)0x4005D414))  //Raw Interrupt Status
#define GPIO_PORTF_AHB_MIS_R        (*((volatile uint32_t *)0x4005D418))  //Masked Interrupt Status
#define GPIO_PORTF_AHB_ICR_R        (*((volatile uint32_t *)0x4005D41C))  //Interrupt Clear
#define GPIO_PORTF_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005D420))  //Alternate Function Select
#define GPIO_PORTF_AHB_DR2R_R       (*((volatile uint32_t *)0x4005D500))  //2-mA Drive Select
#define GPIO_PORTF_AHB_DR4R_R       (*((volatile uint32_t *)0x4005D504))  //4-mA Drive Select
#define GPIO_PORTF_AHB_DR8R_R       (*((volatile uint32_t *)0x4005D508))  //8-mA Drive Select
#define GPIO_PORTF_AHB_ODR_R        (*((volatile uint32_t *)0x4005D50C))  //Open Drain Select
#define GPIO_PORTF_AHB_PUR_R        (*((volatile uint32_t *)0x4005D510))  //Pull-Up Select
#define GPIO_PORTF_AHB_PDR_R        (*((volatile uint32_t *)0x4005D514))  //Pull-Down Select
#define GPIO_PORTF_AHB_SLR_R        (*((volatile uint32_t *)0x4005D518))  //Slew Rate Control Select
#define GPIO_PORTF_AHB_DEN_R        (*((volatile uint32_t *)0x4005D51C))  //Digital Enable
#define GPIO_PORTF_AHB_LOCK_R       (*((volatile uint32_t *)0x4005D520))  //Lock
#define GPIO_PORTF_AHB_CR_R         (*((volatile uint32_t *)0x4005D524))  //Commit
#define GPIO_PORTF_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005D528))  //Analog Mode Select
#define GPIO_PORTF_AHB_PCTL_R       (*((volatile uint32_t *)0x4005D52C))  //Port Control
#define GPIO_PORTF_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005D530))  //ADC Control
#define GPIO_PORTF_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005D534))  //DMA Control
	
// Port F AHB pins specific addresses  
#define GPIO_PORTF_AHB_DATA_PIN4       (*((volatile uint32_t *)0x4005D040))  //Pin 4 access
#define GPIO_PORTF_AHB_DATA_PIN3       (*((volatile uint32_t *)0x4005D020))  //Pin 3 access
#define GPIO_PORTF_AHB_DATA_PIN2       (*((volatile uint32_t *)0x4005D010))  //Pin 2 access
#define GPIO_PORTF_AHB_DATA_PIN1       (*((volatile uint32_t *)0x4005D008))  //Pin 1 access
#define GPIO_PORTF_AHB_DATA_PIN0       (*((volatile uint32_t *)0x4005D004))  //Pin 0 access
	
// Read only registers
	
#define GPIO_PORTF_AHB_PeriphID4_R     (*((volatile uint32_t *)0x4005DFD0))  //Peripheral Identification 4
#define GPIO_PORTF_AHB_PeriphID5_R     (*((volatile uint32_t *)0x4005DFD4))  //Peripheral Identification 5
#define GPIO_PORTF_AHB_PeriphID6_R     (*((volatile uint32_t *)0x4005DFD8))  //Peripheral Identification 6
#define GPIO_PORTF_AHB_PeriphID7_R     (*((volatile uint32_t *)0x4005DFDC))  //Peripheral Identification 7
#define GPIO_PORTF_AHB_PeriphID0_R     (*((volatile uint32_t *)0x4005DFE0))  //Peripheral Identification 0
#define GPIO_PORTF_AHB_PeriphID1_R     (*((volatile uint32_t *)0x4005DFE4))  //Peripheral Identification 1
#define GPIO_PORTF_AHB_PeriphID2_R     (*((volatile uint32_t *)0x4005DFE8))  //Peripheral Identification 2
#define GPIO_PORTF_AHB_PeriphID3_R     (*((volatile uint32_t *)0x4005DFEC))  //Peripheral Identification 3
#define GPIO_PORTF_AHB_PCellID0_R      (*((volatile uint32_t *)0x4005DFF0))  //PrimeCell Identification 0
#define GPIO_PORTF_AHB_PCellID1_R      (*((volatile uint32_t *)0x4005DFF4))  //PrimeCell Identification 1
#define GPIO_PORTF_AHB_PCellID2_R      (*((volatile uint32_t *)0x4005DFF8))  //PrimeCell Identification 2
#define GPIO_PORTF_AHB_PCellID3_R      (*((volatile uint32_t *)0x4005DFFC))  //PrimeCell Identification 3
	
/*****************************************************************************/




#define GPIO_RCGC     (*((volatile uint32_t *)0x400FE608))  //General-Purpose Input/Output Run Mode Clock Gating Control
#define GPIO_PR       (*((volatile uint32_t *)0x400FEA08))  //General-Purpose Input/Output Peripheral Ready
#define EEPROM_RCGC   (*((volatile uint32_t *)0x400FE658))  //EEPROM Run Mode Clock Gating Control page 356
#define SREEPROM      (*((volatile uint32_t *)0x400FE558))  //EEPROM Software Reset page 334
	


#define EEPROM        ((volatile uint32_t *)0x400AF000)     //EEPROM Register Descriptions page 55
#define EESIZE        (*((volatile uint32_t *)0x400AF000))  //EEPROM Size Information page 560
#define EEBLOCK       (*((volatile uint32_t *)0x400AF004))  //EEPROM Current Block page 561
#define EEOFFSET      (*((volatile uint32_t *)0x400AF008))  //EEPROM Current Offset page 562
#define EERDWR        (*((volatile uint32_t *)0x400AF010))  //EEPROM Read-Write page 563
#define EERDWRINC     (*((volatile uint32_t *)0x400AF014))  //EEPROM Read-Write with Increment page 564
#define EEDONE        (*((volatile uint32_t *)0x400AF018))  //EEPROM Done Status page 565
#define EESUPP        (*((volatile uint32_t *)0x400AF01C))  //EEPROM Support Control and Status page 567
#define EEUNLOCK      (*((volatile uint32_t *)0x400AF020))  //EEPROM Unlock page 569
#define EEPROT        (*((volatile uint32_t *)0x400AF030))  //EEPROM Protection page 570
#define EEPASS0       (*((volatile uint32_t *)0x400AF034))  //EEPROM Password page 572
#define EEPASS1       (*((volatile uint32_t *)0x400AF038))  //EEPROM Password page 572
#define EEPASS2       (*((volatile uint32_t *)0x400AF03C))  //EEPROM Password page 572
#define EEINT         (*((volatile uint32_t *)0x400AF040))  //EEPROM Interrupt page 573
#define EEHIDE        (*((volatile uint32_t *)0x400AF050))  //EEPROM Block Hide page 574
#define EEDBGME       (*((volatile uint32_t *)0x400AF080))  //EEPROM Debug Mass Erase pg 575
#define EEPROMPP      (*((volatile uint32_t *)0x400AFFC0))  //EEPROM Peripheral Properties pg 576

//*****************************************************************************
//
// The following are defines for the bit fields in the EEPROM_EEDONE register.
//
//*****************************************************************************
#define EEPROM_EEDONE_WRBUSY    0x00000020  // Write Busy
#define EEPROM_EEDONE_NOPERM    0x00000010  // Write Without Permission
#define EEPROM_EEDONE_WKCOPY    0x00000008  // Working on a Copy
#define EEPROM_EEDONE_WKERASE   0x00000004  // Working on an Erase
#define EEPROM_EEDONE_WORKING   0x00000001  // EEPROM Working

//*****************************************************************************
//
// The following are defines for the bit fields in the EEPROM_EESUPP register.
//
//*****************************************************************************
#define EEPROM_EESUPP_PRETRY    0x00000008  // Programming Must Be Retried
#define EEPROM_EESUPP_ERETRY    0x00000004  // Erase Must Be Retried


#endif
