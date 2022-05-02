#include "main.h"

//first define log level local then include!
#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE

#define LOG_TAG "MAIN"

static Main my_main;

extern "C" void app_main(void)
{
    ESP_ERROR_CHECK(my_main.setup());

    while(true)
    {
        my_main.loop();
    }
}

esp_err_t Main::setup(void)
{
    ESP_LOGI(LOG_TAG, "setüp!");
    esp_err_t status{ESP_OK};
    return status;
}

void Main::loop(void)
{
    ESP_LOGI(LOG_TAG, "löp!");
    vTaskDelay(1000 / portTICK_PERIOD_MS);  
}
