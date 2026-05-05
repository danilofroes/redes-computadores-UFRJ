/**
 * @file main.cpp
 * 
 * @brief Arquivo principal do ESP32 transmissor de telemetria LoRa
 * Esse transmissor será responsável por processar, formatar e enviar os dados de telemetria dos sensores coletados
 * para o receptor via LoRa
 * 
 * @author Danilo Fróes
 * @date 2026
 */

 #include "freertos/FreeRTOS.h"
 #include "freertos/task.h"

 extern "C" {
    void app_main(void);
 }

 void app_main(void) {

    while (true) {

        vTaskDelay(pdMS_TO_TICKS(10));
    }
 }