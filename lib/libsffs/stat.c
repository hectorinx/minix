pmode_t get_mode(struct inode *ino, int mode)
int do_stat(void)
  stat.st_size = attr.a_size;
int do_chmod(void)
int do_utime(void)
  if ((ino = find_inode(m_in.m_vfs_fs_utime.inode)) == NULL)
  switch(m_in.m_vfs_fs_utime.acnsec) {
	m_in.m_vfs_fs_utime.acnsec = 0;
	/* cases m_in.m_vfs_fs_utime.acnsec < 0 || m_in.m_vfs_fs_utime.acnsec >= 1E9
	attr.a_atime.tv_sec = m_in.m_vfs_fs_utime.actime;
	attr.a_atime.tv_nsec = m_in.m_vfs_fs_utime.acnsec;
  switch(m_in.m_vfs_fs_utime.modnsec) {
	m_in.m_vfs_fs_utime.modnsec = 0;
	/* cases m_in.m_vfs_fs_utime.modnsec < 0 || m_in.m_vfs_fs_utime.modnsec >= 1E9
	attr.a_mtime.tv_sec = m_in.m_vfs_fs_utime.modtime;
	attr.a_mtime.tv_nsec = m_in.m_vfs_fs_utime.modnsec;