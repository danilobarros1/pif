#include <stdio.h>

int main(void) {
    int h, m, s, duracao_s;
    printf("Horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Duracao em segundos: ");
    scanf("%d", &duracao_s);

    long total_s = (h * 3600) + (m * 60) + s + duracao_s;
    total_s %= 86400; // Resto do ciclo de 24h

    int h_fim = total_s / 3600;
    int m_fim = (total_s % 3600) / 60;
    int s_fim = total_s % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}
