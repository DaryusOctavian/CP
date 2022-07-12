import pygame, time

background_colour = (0, 0, 0)
(width, height) = (720, 720)
screen = pygame.display.set_mode((width, height))
# pygame.display.set_caption("Tutorial 1")
screen.fill(background_colour)
pygame.display.flip()
# running = True
# while running:
#     for event in pygame.event.get():
#         if event.type == pygame.QUIT:
#             running = False
pygame.draw.circle(screen, (255, 255, 255), (200, 200), 50)
pygame.draw.circle(screen, (255, 255, 255), (200, 200), 25)
pygame.display.flip()


time.sleep(10)
