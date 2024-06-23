#include <stdio.h>
#include <stdlib.h>

#include <sys/epoll.h>
#include <vector>
#include "utils.h"

#pragma once

/**
 * @class EpollManager
 * @brief Manages file descriptors using the epoll event notification facility.
 *
 * This class provides methods to register, modify, and delete file descriptors
 * from the epoll instance, as well as to poll for events.
 */
class EpollManager {
public:
  /**
   * @brief Constructs an EpollManager object.
   *
   * Initializes the epoll instance.
   */
  EpollManager();

  /**
   * @brief Registers a file descriptor with the epoll instance.
   *
   * @param fd The file descriptor to register.
   * @param flags The event flags to monitor (e.g., EPOLLIN, EPOLLOUT).
   * @return 0 on success, -1 on failure.
   */
  int register_fd(int fd, uint32_t flags);

  /**
   * @brief Modifies the event flags for a registered file descriptor.
   *
   * @param fd The file descriptor to modify.
   * @param flags The new event flags to monitor.
   * @return 0 on success, -1 on failure.
   */
  int mod_fd(int fd, uint32_t flags);

  /**
   * @brief Deletes a file descriptor from the epoll instance.
   *
   * @param fd The file descriptor to delete.
   * @return 0 on success, -1 on failure.
   */
  int delete_fd(int fd);

  /**
   * @brief Polls for events on the registered file descriptors.
   *
   * @param events A vector to store the triggered events.
   * @return The number of file descriptors with triggered events, or -1 on failure.
   */
  int poll(std::vector<struct epoll_event>& events);

private:
  int epoll_fd;  ///< The file descriptor for the epoll instance.
};
